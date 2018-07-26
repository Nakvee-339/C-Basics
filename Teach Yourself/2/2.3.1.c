#include<stdio.h>
int main()
{
    int a;
    float m,f;
    printf("1. Meter to feet\n2. Feet to meter\n");
    printf("Enter Choice ");
    scanf("%d",&a);
    if(a==1){
        printf("Enter in meters ");
        scanf("%f",&m);
        f=m*3.28;
        printf("In feet it is %0.3f",f);
    }
    else{
        printf("Enter in feet ");
        scanf("%f",&f);
        m=f/3.28;
        printf("In meter it is %0.3f",m);
    }
    return 0;
}
