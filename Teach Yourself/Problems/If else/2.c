#include<stdio.h>
int main()
{
    int a;
    printf("Enter an integer ");
    scanf("%d",&a);
    if(a>0){
        printf("Its a positive number");
    }
    else{
        printf("The number is negative");
    }
    return 0;
}
