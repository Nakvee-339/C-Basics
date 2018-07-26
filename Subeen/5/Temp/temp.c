#include<stdio.h>
int main()
{
char ch,C,F,K;
double c,f,k,n,m;
printf("Temperature Conversion\n");
printf("\nTo input in Celsius Press C\nTo input in Kelvin Press K\nTo input in Fahrenheit Press F\n ");
ch=getchar();
if(ch=='C'){
    printf("Type the Temperature in Celsius ");
    scanf("%lf",&c);
    k=c+273;
    n=1.8;
    m=n*c;
    f=m+32;
    printf("Kelvin Value %0.3lf and Fahrenheit Value %0.3lf",k,f);
}
if(ch=='K'){
    printf("Type the Temperature in Kelvin ");
    scanf("%lf",&k);
    c=k-273;
    n=1.8;
    f=n*c+32;
    printf("Celsius Value is %0.3lf and Fahrenheit Value is %0.3lf",c,f);
}
if(ch=='F'){
    printf("Type the Temperature in Fahrenheit ");
    scanf("%lf",&f);
    n=0.555;
    m=f-32;
    c=m*n;
    k=c+273;
    printf("Celsius Value is %0.3lf and Kelvin Value is %0.3lf",c,k);
}
return 0;
}
