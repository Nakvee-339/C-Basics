#include<stdio.h>
int main()
{
int a[]={1,2,3,4,5,6};
int i,j,temp;
    for(i=0,j=5;i<6;i++,j--){
    temp=a[j];
    a[i]=a[j];
    a[j]=temp;
    }
        for(i=0;i<6;i++){
        printf("%d\n",a[i]);
        }
return 0;
}
