#include<stdio.h>
int main()
{
int n,i,sum;

printf("Enter the last number of the Series ");
scanf("%d",&n);
sum=0;
for(i=1;i<=n;i++){
    sum=sum+i;
    }
printf("The Sum of the Series is %d",sum);

return 0;

}
