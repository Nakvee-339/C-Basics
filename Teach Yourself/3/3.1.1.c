#include<stdio.h>
int main()
{
    char i,a[10];
    for(i=0;i<10;i++){
        printf("Enter a Character ");//2 bar ashe ken?
        /*
        Consider the initialization of i to character instead of integer.
        Did you really mean to initialize it with a character?
        
        The reason behind displaying the "Enter a Character " twice is :
        getchar takes an input while you press enter and the other when you actually enter the character.
        */
        a[i]=getchar();
    }
    return 0;
}
