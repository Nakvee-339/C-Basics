#include<stdio.h>
int main()
{
char ch;
printf("Vowel and Consonent checker\n");
printf("Enter an alphabet(use lower case): ");
ch=getchar();

if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
printf("%c is vowel",ch);
}
else{
printf("It is a consonant");
}
return 0;
}
