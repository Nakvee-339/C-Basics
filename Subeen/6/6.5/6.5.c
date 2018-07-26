#include<stdio.h>
int main()
{
int a[]={1,2,3,4,5,6,7,8,9,10};
int b[10];
int i,j;
    for(i=1,j=9;i<10;i++,j--){
    b[j]=a[i];
    }
    for(i=1;i<10;i++){
    a[i]=b[i];
    }
    for(i=1;i<10;i++){
    printf("%d th element is %d\n",i,a[i]);
    }
return 0;
}
