#include<stdio.h>
int main()
{
int a[5]={1,3,5,6,4};
printf("%d\n%d",a[6],a[-2]);
//a[6] or a[-2] is not defined in the array. The index extends to 0 to 4.
/*The value we are getting here is garbage value*/
return 0;
}
