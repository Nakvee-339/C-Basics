#include<stdio.h>
int xor(int p, int q);
int main()
{
    int a,b;//please explain this code

    printf("Enter A(0 or 1): ");
    scanf("%d",&a);
    printf("Enter B(0 or 1): ");
    scanf("%d",&b);
    printf("A AND B: %d\n",a && b);
    printf("A OR B: %d\n",a||b);
    printf("A XOR B: %d\n",xor(a,b));
    return 0;
}
int xor(int p, int q)
{
    return (p||q) && !(p && q);
}
