#include "udf.h"


DEFINE_CG_MOTION(whell,dt,vel,omega,time,dtime)
{
real pi = 3.14159;
omega[2] = -1 * 32 * pi / 6;
}
