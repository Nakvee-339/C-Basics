#include<stdio.h>
int main()
{
    int a,b;//comparison of two integers
    printf("Enter the first number ");
    scanf("%d",&a);
    printf("Enter the Second Number ");
    scanf("%d",&b);
    if(a<b){
        printf("%d is greater than %d",b,a);
    }
    if(a==b){
        printf("Both quantities are equal");
    }
    if(a>b){
        printf("%d is greater than %d",a,b);
    }
    return 0;
}
