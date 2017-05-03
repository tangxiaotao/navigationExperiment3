/*
 * algorithm.cpp
 *
 *  Created on: Nov 8, 2016
 *      Author: root
 */

#include "algorithm.h"
#include "data.h"
#include "fuzzy.h"

//#define FAI_FROM_NORTH
#define IF_INTEGRATE 1
#define PD


algorithm::algorithm() {

    can=new can0();
    fuzzyCompute = new fuzzy();
    l=1.06;
    expected=0;
    thetaAB = data::thetaABLine/180*M_PI;
    b = data::bABLine;
    sum=0;
    integrate = 0;
    integrationfactor = 0.05;

//    PID *pidstruct;
//    pidstruct->pfactor = 0.2;
//    pidstruct->ifactor = 0.01;
//    pidstruct->dfactor = 1.2;
//    pidstruct->error = 0;
//    pidstruct->lasterror = 0;
//    pidstruct->sumerror;
}

algorithm::~algorithm() {
    // TODO Auto-generated destructor stub
}


#ifndef FAI_FROM_NORTH
void algorithm::autopilot() {
    double comp = 0;

//#ifdef PID
//    expected = pid(struct)*180/M_PI;
//    comp = (-1.7*(data::theta+data::faiInitial)) + expected;

//#elif defined PD
    expected = pd()*180/M_PI;
    comp = (-1.7*(data::theta+data::faiInitial)) + expected +disintegrate()*integrationfactor*IF_INTEGRATE;
    qDebug("integrate: %lf", disintegrate());

//#elif defined PUREPURSUIT
//    expected = ppursuit(struct);*180/M_PI;
//    comp = (-1.7*(data::theta+data::faiInitial)) + expected +(*integrate)*integrationfactor*IF_INTEGRATE;

//#else
//    printf("DEFINE ERROR");
//#endif

    qDebug("zhuanjiao=%lf",data::theta);
    qDebug()<<"comp"<<comp;
    /* 20 is jiansubi, time is 0.1s */
    int a = 0;
    a = (int)(comp*16*100/18)*37.5;
    data::motor_vel=a;
    qDebug() << "a: "<<a;

    if(a>20000) {
        can->can_send(20000);
    }
    else if( a<-20000) {
        can->can_send(-20000);
    }
    else if ( (a<200 ) && (a>-200) ) {
        can->can_send(0);
    }
    else {
        can->can_send(a);
    }
}
#endif

#ifdef FAI_FROM_NORTH
void algorithm::autopilot() {

    expected = pd()*180/M_PI;
    double comp = faifromnorth(data::northdata_to_fai) + expected +(*integrate)*integrationfactor*IF_INTEGRATE;
    qDebug("zhuanjiao=%lf",data::theta);
    qDebug()<<"comp"<<comp;
    /* 20 is jiansubi, time is 0.1s */
    int a = 0;
    a = (int)(comp*16*100/18)*37.5;
    data::motor_vel=a;
    qDebug() << "a: "<<a;

    if(a>20000) {
        can->can_send(20000);
    }
    else if( a<-20000) {
        can->can_send(-20000);
    }
    else if ( (a<200 ) && (a>-200) ) {
        can->can_send(0);
    }
    else {
        can->can_send(a);
    }
}
#endif

double algorithm::faifromnorth(double *northdata) {    //通过航向角变化率来求前轮转角
    double faifromnor = 0;
    double detime = data::norfaitime[1]-data::norfaitime[0];
    if (detime >= 40)
        detime -= 40;
    qDebug("detime: %lf", detime);
    faifromnor=atan((northdata[1]-northdata[0])/(detime)*l/data::velocity*3.6)/M_PI*180;
    return faifromnor;
}

/* calculate the Distance */
double algorithm::calculateD(){

    double x=data::lat;
    double y=data::lng;
    thetaAB = data::thetaABLine/180*M_PI;
    b = data::bABLine;
    double d=0;
    while((thetaAB<-M_PI/2) || (thetaAB>3*M_PI/2))
    {
        if (thetaAB<-M_PI/2)
        {
            thetaAB = thetaAB + 2*M_PI;
        }
        else
        {
            thetaAB = thetaAB - 2*M_PI;
        }
    }
    if( (thetaAB<M_PI/2) && (thetaAB>-M_PI/2) ) {
            double k=tan(thetaAB);
            d=(k*x+b-y)/sqrt(1+k*k);
            qDebug()<<"1.the d="<<d;
        }
    else if( (thetaAB>M_PI/2) && (thetaAB<3*M_PI/2) ) {
        double k=tan(thetaAB);
        d =-(k*x + b-y)/sqrt(1+k*k);
        qDebug()<<"2.the d="<<d;
    }
    else if( thetaAB == (M_PI/2) ){
        d=x-data::xInitial;
        qDebug()<<"3.the d="<<d;
    }
    else if( thetaAB == (3*M_PI/2) ) {
        d=data::xInitial-x;
        qDebug()<<"4.the d="<<d;
    }

    data::distance = d;
    return d;
}
double algorithm::ppursuit()
{	//x and y are the location of tractor
    double d=calculateD();
    qDebug()<<"the d="<<d;

    /*if((abs(d))>=0.5){
        data::Ld = 3*abs(d);
        qDebug()<<"3*Ld= "<<data::Ld;
    }
    else{
        data::Ld = 1.2;  // the initial value
    }*/
    data::Ld = fuzzyCompute->fuzzyOutput(d, data::velocity/3.6);
    qDebug()<<"LD="<<data::Ld;
    double northTheta = data::north;
    data::dNorth = data::north - thetaAB*180/M_PI;
    northTheta = northTheta/180*M_PI;
    double fai=0;

    fai = atan(-2*l*(-d*cos(northTheta-thetaAB) + sqrt((data::Ld)*(data::Ld) - d*d)*sin(northTheta-thetaAB))/data::Ld/data::Ld);
    if ((fai<=FAILIMIT)&&(fai>=-FAILIMIT))
    {
        fai=fai;
    }
     if(fai>FAILIMIT) {
        fai=FAILIMIT;
    }
    if(fai<-FAILIMIT) {
        fai=-FAILIMIT;
    }
    /*else if (d>0)
        fai=FAILIMIT;
         else fai=-FAILIMIT;*/

    qDebug("fai=%f\n",fai/M_PI*180);
    data::calculFai = fai;
    return fai;
}

double algorithm::pd() {
    double Kp = 0.255;
    double Kd = 1;
    double d = calculateD();
    double theta = data::north/180*M_PI-thetaAB;
    double fai = atan(l*cos(theta)*cos(theta)*cos(theta)*(-Kd*tan(theta)+Kp*d));
    data::calculFai = fai;
    return fai;
}

//double algorithm::pid(PID *pids)
//{
//    pids->error = data::distance;
//    pids->sumerror += data::distance;
//    double fai = 0;
//    fai = pids->pfactor*pids->error + pids->ifactor*pids->sumerror + pids->dfactor*(pids->error-pids->lasterror);
//    pids->lasterror = pids->error;
//    return fai;
//}


/* stop the motor */
void algorithm::stop() {
    can->can_send(8);
}
double algorithm::disintegrate()
{
    if (abs(data::north-data::thetaABLine)>10)
    {
        integrate = 0;
    } else
    {
        (integrate) += data::distance;
    }
    return integrate;
}
