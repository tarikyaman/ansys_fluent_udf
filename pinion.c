#include "udf.h"

DEFINE_CG_MOTION(pinion,dt,vel,omega,time,dtime)
{
real pi = 3.14159;
omega[2] = 8*pi;
}