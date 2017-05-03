#include "degreetostd.h"
double degreetostd(double a)
{
    while (a < 0)
        (a)+=360;
    while (a >=360)
        (a)+=-360;
    return a;
}
