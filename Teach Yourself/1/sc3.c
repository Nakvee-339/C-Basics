#include<stdio.h>
int o_to_c();
int main()
{
    int cups; //8 ounces in a cup. number of cups required
    cups = o_to_c();
    printf("Cups Required %d",cups);
    return 0;
}
int o_to_c()
{
    int o,c;
    printf("Number of Ounces ");
    scanf("%d",&o);
    c=o/8;
}
