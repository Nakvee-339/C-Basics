#include<stdio.h>

#define ymin 0.0
#define ymax 150.0
#define b 1./7.
#define DELOVRH 0.5

DEFINE_PROFILE(int x_velocity,int t, int i);
{
real y;
real del;
real h;
real x[ND_ND];
real ufree;
face_t f;
h=ymax-ymin;
del=DELOVRH*h;
ufree=5.69926;
begin_f_loop(f,t)
{
F_CENTROID(x,f,t);
y=x[1];
if (y<=del)
F_PROFILE(f,t,i)=ufree*pow(y/del,b);
else
F_PROFILE(f,t,i)=ufree*pow((h-y)/del,b);
}
end_f_loop(f,t)
}
