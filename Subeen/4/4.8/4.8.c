#include<stdio.h>
int main()
{
int n,i;
n=6;
    for(i=1;i<=100;i=i+1){
    printf("%dX%d=%d\n",n,i,n*i);
    if(i>=10)
    break;
    }
    return 0;
}
