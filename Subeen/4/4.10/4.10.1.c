#include<stdio.h>
int main()
{
int m,n,i;
m=0;
    for(n=1;n<=5;n++){
        for(i=1;i<=10;i++){
        m=n*i;
        printf("%dX%d=%d\n",n,i,m);

        }
    printf("\n");
    }
  return 0;
}
