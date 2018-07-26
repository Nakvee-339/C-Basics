#include<stdio.h>
int main()
{
char ch;
printf("Enter an alphabet: ");
ch=getchar();
if(ch>='a' && ch<='z'){
printf("%c is in lower case",ch);
}
else{
printf("%c is in upper case",ch);
}
return 0;
}
