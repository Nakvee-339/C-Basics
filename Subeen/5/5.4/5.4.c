#include<stdio.h>
int main()
{
int b,y,r;
double i,i1,i2,t,y1,m;
printf("Enter the Loaned Amount: ");
scanf("%d",&b);
printf("Interest Rate Annually: ");
scanf("%d",&r);
printf("Number of Year: ");
scanf("%d",&y);

i=0.01*r;
i1=i*b;//i1 is the amount according interest rate
i2=i1*y;//i2 is the total amount due to interest after defined year
t=i2+b;//total amount includes base and interest amount
y1=t/y;//yearly payment
m=y1/12;//monthly payment
printf("Total amount to be returned is %0.3lf\n",t);
printf("Total interest amount %0.3lf\n",i2);
printf("Yearly Payment %0.3lf\nMonthly Payment %0.3lf",y1,m);

return 0;
}
