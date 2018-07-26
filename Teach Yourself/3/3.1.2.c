#include<stdio.h>
int main()
{
    int i;
    for(i='a';i<'z'+1;i++){
        printf("ASCII Value is %d for %c\n",i,i);
    }
    printf("\n");
    for(i='A';i<'Z'+1;i++){
        printf("ASCII Value is %d for %c\n",i,i);
    }
    return 0;
}
