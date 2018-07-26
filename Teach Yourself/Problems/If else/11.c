#include<stdio.h>
int main()
{
    int l;
    printf("Year ");
    scanf("%d",&l);
    if(l%4==0){
        printf("Leap Year");
    }
    else {
        printf("Not a leap year");
    }
    return 0;
}
