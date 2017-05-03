#include "widget.h"
#include <QApplication>
#include <QtGui>
#include <QApplication>
#include <unistd.h>
#include <signal.h>
#include <stdlib.h>
#include"data.h"
#define command "/sbin/ip link set can0 type can bitrate 800000"
#define up "ifconfig can0 up"
#define down "ifconfig can0 down"

//static double degreetostd(double *a)  //把角度转化至[0,360)
//{
//    while (*a < 0)
//        (*a)+=360;
//    while (*a >=360)
//        (*a)+=-360;
//    return *a;
//}

double data::GPStime = 0;
double data::lat=0;
double data::lng=0;
char data::satelite_num[16]="0";
char data::num[16]="0";
double data::altitude=0;
double data::north=0;
double data::velocity=0;
char data::stop[16]="0";
double data::theta=0;
double data::car_length=0;

double data::distance=data::deInitial;
double data::dNorth = data::dNorthInitial;
double data::calculFai=0;
double data::xInitial = 0;
double data::yInitial = 0;
double data::northInitial = 0;
double data::deInitial = 0.5;
double data::dNorthInitial = 0.0;
double data::thetaABLine = 0;
double data::bABLine = 0;
double data::Ld = 1.2;
int data::motor_vel=0;
double data::faiInitial=76.80;
double data::northdata_to_fai[2] = {0, 0};
double data::norfaitime[2] = {0, 0};


int main(int argc, char *argv[])
{
    system(down);
    system(command);
    system(up);

    QApplication a(argc, argv);

    Widget w;
    w.showFullScreen();
    w.show();
    return a.exec();
}
