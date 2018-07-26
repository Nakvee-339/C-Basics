#include<stdio.h>
int main()
{
    int i,a[5],sum=0,b[5];
    for(i=0;i<5;i++){
        printf("Enter obtained number out of 200\n");
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++){
        b[i]=a[i]/2;
        printf("Numbers in Percent is %d\n",b[i]);
    }
    return 0;
}
