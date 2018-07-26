#include<stdio.h>
int main()
{
    int i,j,k;
    printf("Guess The Number ");
    scanf("%d",&j);
    if(j==3){
        printf("Right!");
    }
    else {
        printf("Wrong!");
    }

    for(i=2;i>0;i--){
        printf("Try again! chance remaining %d\n",i);
        printf("Guess The Number ");
        scanf("%d",&j);
         if(j==3){
        printf("Right!");
    }
    else {
        printf("Wrong!");
    }
}
    return 0;
}
