#include<stdio.h>
int main()
{
    int i,j;
    printf("Enter an Integer ");
    scanf("%d",&j);
    for(i=j;i>0;i--){
        printf("%d\n",i);
    }
    printf("\a");
    return 0;
}
