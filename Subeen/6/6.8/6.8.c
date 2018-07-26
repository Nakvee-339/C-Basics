#include<stdio.h>
int main()
{
int marks,i,count;
int t_marks[]={78,87,71,68,68,90,59,65,66,82};
    for(marks=50;marks<=100;marks++){
    count=0;
        for(i=0;i<10;i++){
        if(t_marks[i]==marks){
        count++;
        }
        }
printf("marks %d\t counts %d\n",marks,count);
    }
return 0;
}
