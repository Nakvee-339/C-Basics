#include<stdio.h>
int main()
{
int a,b;
double d;
printf("Please enter a number: ");
scanf("%d",&a);
printf("Please enter another number: ");
scanf("%d",&b);

printf("%d+%d=%d\n",a,b,a+b);
printf("%d-%d=%d\n",a,b,a-b);
printf("%d*%d=%d\n",a,b,a*b);

printf("%d/%d=%d\n",a,b,a/b);
return 0;
}
