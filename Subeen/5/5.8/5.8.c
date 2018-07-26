#include<stdio.h>
int main()
{
int a,b,x;
//Determining GCD of two numbers
printf("Enter Integer 1: ");
scanf("%d",&a);
printf("Enter Integer 2: ");
scanf("%d",&b);

if(a>b){
    for(x=b;x>=0;x--)
    {
        if(a%x==0 && b%x==0)
        printf("GCD is %d ",x);
        break;
    }
}
if(b>a) {
    for(x=a;x>=0;x--)
    {
        if(a%x==0 && b%x==0)
        printf("GCD is %d ",x);
        break;
    }
}
else {
    printf("No GCD Available");
    }

return 0;
}
