#include<stdio.h>
int main()
{
    int a,b,c;//greater integer among 3
    printf("Enter the first Integer ");
    scanf("%d",&a);
    printf("Enter the second Integer ");
    scanf("%d",&b);
    printf("Enter the third Integer ");
    scanf("%d",&c);
    if(a>b){
            if(b>c||c>b)
                printf("Quantity %d is greater",a);
    }
    if(b>a){
        if(a>c||c>a)
            printf("Quantity %d is greater",b);
    }
    if(c>a){
        if(a>b||b>a)
            printf("Quantity %d is greater",c);
    }

    return 0;
}
