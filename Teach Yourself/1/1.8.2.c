#include<stdio.h>
int convert();
int main()
{
    int p;
    p=convert();
    printf("Input amount of Dollar in Pounds is %d",p);
    return 0;
}
int convert()
{
    int d;
    printf("Enter the amount in Dollar ");
    scanf("%d",&d);
    return d/2;
}
