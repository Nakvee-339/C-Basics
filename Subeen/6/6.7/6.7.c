#include<stdio.h>
int main()
{
double a[6]={56,62,45,89,47,62}, b[6]={65,78,46,59,93,80}, c[6]={55,91,74,73,69,77};
int i;
double t[6];
    for(i=0;i<6;i++){
    t[i]=a[i]*0.25+b[i]*0.25+c[i]*0.5;
    }
    for(i=1;i<6;i++){
    printf("Roll: %d total mark %0.3lf\n",i,a[i-1]);
    }
return 0;
}
