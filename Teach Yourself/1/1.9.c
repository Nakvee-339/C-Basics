#include<stdio.h>

int sum(x,y);
int main()
{
    sum(12, 13);
    sum(1, 9);

    return 0;
}
int sum(x,y)
{
    printf("%d\n",x+y);
}

