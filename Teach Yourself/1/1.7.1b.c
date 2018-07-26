#include<stdio.h>
int main()
{
    f2();
    printf("3");
    return 0;
}
void f2()
{
    f1();
    printf("2");
}
void f1()
{
    printf("1");
}
