#include<stdio.h>
int main()
{
int n;
printf("Enter a number: ");
scanf("%d",&n);

if(n%2==0){
printf("The number is even");
}
else if(n%2==1){
printf("The number is odd");
}
else if(n<0){
printf("The value is negative");
}
return 0;
}
