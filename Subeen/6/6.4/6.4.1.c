#include <stdio.h>
int main()
{
int i;
int a[10] = {10,20,30,40,50,60,70,80,90,100};
for(i=9;i>-1;i--){
    printf("%d th element is %d\n",i+1,a[i]);
    }
return 0;
}
