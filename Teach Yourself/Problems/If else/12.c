#include<stdio.h>
void f1();
void f2();
void f3();
void f4();
int main()
{
    char A,B,C,D,i;
    printf("A. Addition\nB. Subtraction\nC. Multiplication\nD. Division\n");
    printf("Choose One Operation: ");
    scanf("%c",&i);
    if(i=='A'){
        f1();
    }
    if(i=='B'){
        f2();
    }
    if(i=='C'){
        f3();
    }
    if(i=='D'){
        f4();
    }

    return 0;
}
void f1()
{
    int a,b;
    printf("Enter the first Integer ");
    scanf("%d",&a);
    printf("Enter the second Integer ");
    scanf("%d",&b);
    printf("Sum of these two numbers are %d",a+b);
}
void f2()
{
    int a,b;
    printf("Enter the first Integer ");
    scanf("%d",&a);
    printf("Enter the second Integer ");
    scanf("%d",&b);
    if(a>b){
        printf("Difference of these two numbers are %d",a-b);
    }
    if(a<b){
        printf("Difference between these two numbers are %d",b-a);
    }

}
void f3()
{
    int a,b;
    printf("Enter the first Integer ");
    scanf("%d",&a);
    printf("Enter the second Integer ");
    scanf("%d",&b);
    printf("Multiplied value of these two numbers are %d",a*b);
}
void f4()
{
    float a,b;
    printf("Enter the first Integer ");
    scanf("%f",&a);
    printf("Enter the second Integer ");
    scanf("%f",&b);
    if(a>b){
        printf("0.3%f divided by %0.3f is %0.3f",a,b,a/b);
    }
    if(a<b){
        printf("0.3%f divided by 0.3%f is %0.3f",b,a,b/a);
    }
    if(a==b){
        printf("Two quantities are equal. Hence the value is 1");
    }
}
