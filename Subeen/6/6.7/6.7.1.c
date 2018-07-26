#include<stdio.h>
int main()
{
int a[6]={85,75,49,69,38,88}, b[6]={75,78,96,48,39,66}, c[6]={75,68,64,66,74,64};
double t[6];
int i;
    for(i=0;i<6;i++){
    t[i]= a[i]/4.0 + b[i]/4.0 + c[i]/2.0;
    }
    for(i=1;i<=6;i++){
    printf("Roll:%d\t has total marks of %0.2lf\n",i,t[i-1]);
    }

    }
return 0;
}
