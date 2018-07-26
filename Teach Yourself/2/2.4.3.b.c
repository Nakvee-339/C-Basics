#include<stdio.h>
int main()
{
    int i,j,s,m;
    printf("Sum of 1 to which number? Insert: ");
    scanf("%d",&i);
    s=0;
    m=1;
    for(j=1;j<i+1;j++){
        s=s+j;
        m=m*j;
    }
    printf("Sum is %d\nProduct is %d",s,m);
    return 0;
}
