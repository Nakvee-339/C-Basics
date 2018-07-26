#include<stdio.h>
int main()
{
    int i,a[10],sum=0;
    for(i=0;i<10;i++)
    {
        printf("Enter an integer");
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        sum=sum+a[i];
    }
    printf("Average is %d",sum/10);

}
