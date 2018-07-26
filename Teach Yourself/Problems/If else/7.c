#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the first integer ");
    scanf("%d",&a);
    printf("Enter the second integer ");
    scanf("%d",&b);
    if(a==b){
        printf("Both Quantities are Equal");
    }
    else{
        if(a<b){
            printf("%d is greater",b);
        }
        if(a>b){
            printf("%d is greater",a);
        }
    }
    return 0;
}
