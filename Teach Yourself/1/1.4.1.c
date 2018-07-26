#include<stdio.h>
int main()
{
int i;
float f;

printf("Enter an Integer ");
scanf("%d",&i);
printf("Enter a floating point number ");
scanf("%f",&f);

printf("Integer value is %d\nFloating value is %0.2f",i,f);
return 0;
}
