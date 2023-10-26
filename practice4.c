#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c,y,s,Area;
    printf("Enter the 3 sides of triangle:");
    scanf("%d %d %d", &a,&b,&c);
    s=(a+b+c)/2;
    //printf("%d",s);
    s*(s-a)*(s-b)*(s-c);
    Area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("area of triangle is :%d", Area);

    return 0;
}