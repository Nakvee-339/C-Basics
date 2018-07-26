#include<stdio.h>
int main()
{
    float w,m,g1;

    printf("Enter your weight in Newton ");
    scanf("%f",&w);
    m=w/9.8;
    g1=9.8*0.17;
    printf("weight in moon is %0.3f newtons",m*g1);

    return 0;
}
