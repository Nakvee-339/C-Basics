#include<stdio.h>
int main()
{
    char ch, A, B, C;
    float a;
    int l,w,b,h,r;
    printf("Area Calculation\nSelect the type of Geometry\nA. Circle\tB. Rectangle\tC.Triangle\n");
    scanf("%c",&ch);
    if(ch=='A'){
        printf("Enter the radius ");
        scanf("%d",&r);
        a=3.1416*r*r;
        printf("Area of The Circle is %0.3f meter squares",a);
    }
    else if(ch=='B'){
        printf("Enter the length and width respectively\n");
        scanf("%d %d",&l,&w);
        printf("Area of The Rectangle is %d meter squares",l*w);
    }
    else if(ch=='C'){
        printf("Enter the base and height respectively\n");
        scanf("%d %d",&b,&h);
        a=0.5*b*h;
        printf("Area of The Triangle is %0.3f meter squares",a);
    }
    return 0;
}
