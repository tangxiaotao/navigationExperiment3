#ifndef ALGORITHM_H_
#define ALGORITHM_H_
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include<QFile>
#include<QTextStream>
#include <qthread.h>
#include "data.h"
#include "can0.h"
#include <qthread.h>
#include <QDateTime>
#include <QFile>
#include <QDir>
#include <QDebug>
#include "fuzzy.h"
#include "degreetostd.h"

#define FAILIMIT (M_PI/4)	//FAILIMIT is the limit of front steering
#define NUM 20

//typedef struct PIDs
//{
//    double pfactor;
//    double ifactor;
//    double dfactor;
//    double lasterror;
//    double error;
//    double sumerror;
//} PID;


class algorithm {

public:
    algorithm();
    virtual ~algorithm();
    //double atan2(double, double);//-pi/2----3*pi/2
    double calculateD();
    double ppursuit();
    void autopilot();
    void stop();
    double pd();    //from chain system    由链式系统得出的PD控制模型
    double faifromnorth(double *northdata);    //以航向角变化率为反馈
    double  disintegrate();    //积分环节
  //  double pid(PID *pids);   //单纯的PID控制环节

    double l;
    double thetaAB;
    double b;
    double expected;
    double integrationfactor;
    double sum;
    double integrate;


    can0 *can;
    fuzzy *fuzzyCompute;
};

#endif /* ALGORITHM_H_ */
