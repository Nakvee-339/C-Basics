#include<stdio.h>
int main()
{
double u,a,v,t,s;

printf("Initial Velocity in meter per second:");
scanf("%lf",&u);
printf("Acceleration in meter per second square: ");
scanf("%lf",&a);
printf("Time duration in Seconds: ");
scanf("%lf",&t);
v=u+a*t;
s=u*t+0.5*a*t*t;
printf("Final Velocity %0.3lf meter per second\nDistance Traveled %0.3lf meter",v,s);

return 0;
}
