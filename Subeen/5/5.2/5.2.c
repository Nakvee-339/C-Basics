#include<stdio.h>
int main()
{
double x,y,a1,a2,b1,b2,c1,c2,n,m;

printf("Solution to ax+by+c=0\n ");

printf("a1= ");
scanf("%lf",&a1);
printf("b1= ");
scanf("%lf",&b1);
printf("c1= ");
scanf("%lf",&c1);

printf("a2= ");
scanf("%lf",&a2);
printf("b2= ");
scanf("%lf",&b2);
printf("c2= ");
scanf("%lf",&c2);

m=b1*a2;
n=a1*b2;

if(m==n){
    printf("No solution");
}
else
{
    y=(c2*a1-c1*a2)/(b1*a2-a1*b2);
    x=(c2*b1-c1*b2)/(b2*a1-a2*b1);

    printf("x= %0.3lf \ny=%0.3lf",x,y);
}
return 0;
}
