#include<stdio.h>
int main()
{
int a,b,sum;
char sign;
printf("Enter a number: ");
scanf("%d",&a);
printf("Enter another number: ");
scanf("%d",&b);
//using the same printf line for all mathematic manipulation
sum=a+b;
sign='+';
printf("%d %c %d= %d\n",a,sign,b,sum);
/*sign is enclosed in 1 quotation syntax*/
sum=a-b;
sign='-';
printf("%d %c %d= %d\n",a,sign,b,sum);

sum=a*b;
sign='*';
printf("%d %c %d= %d\n",a,sign,b,sum);

sum=a/b;
sign='/';
printf("%d %c %d= %d",a,sign,b,sum);
return 0;

}
