#include<stdio.h>
int main()
{
int a,b,x;
//Determining the LCM of Two Integers
printf("Enter the 1st integer: ");
scanf("%d",&a);
printf("Enter the 2nd integer: ");
scanf("%d",&b);


if(a>b){
    for(x=a;;x++)
    {
    if(x%a==0&&x%b==0)
    printf("LCM is %d",x);
    else
        printf("LCM is %d",a*b);
    break;
    }

    }
if(b>a){
    for(x=b;;x++)
    {if(x%a==0&&x%b==0)
    printf("LCM is %d",x);
    else
        printf("LCM is %d",a*b);
    break;
    }
    }
    if(b==a){
    printf("LCM is %d",a);
    }
return 0;
}
