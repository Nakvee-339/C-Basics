#include<stdio.h>
int main()
{
    int a;
    printf("Enter an Integer ");
    scanf("%d",&a);
    if(a%2==0){
        printf("The number is even");
    }
    else {
        printf("Odd number");
    }
    return 0;
}
