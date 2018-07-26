#include<stdio.h>
int main()
{
    int i,a[1];
    for(i=0;i<2;i++){
        printf("Enter integer");
        scanf("%d",&a[i]);//a[1] is one greater than given input. Why?
    }

    printf("Sum is %d\nMultiplication is %d\nSubtraction is %d",a[0]+a[1],a[0]*a[1],a[0]-a[1]);
    return 0;
}
