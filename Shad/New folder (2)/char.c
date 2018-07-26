#include <stdio.h>
int main()
{
    char ch,ch1;
    printf("Enter a Character ");
    scanf("%c",&ch);
    getchar();

    printf("Enter a Character ");
    scanf("%c",&ch1);

    printf("%c %c",ch,ch1);
    return 0;
}
