#include <stdio.h>
#include<math.h>

int main()
{
    // double x,y,z ,result;
    
    // printf("x:");
    // scanf("%lf",&x);
    // printf("y:");
    // scanf("%lf",&y);
    // printf("z:");
    // scanf("%lf",&z);
    // result=x*y+y*z+z*x;
    // printf("compute:. %.2lf",result);

    int a,b,h ;
    double area;
    printf("enter num of a:");
    scanf("%d",&a);
    printf("enter num of b:");
    scanf("%d",&b);
    printf("enter num of h:");
    scanf("%d",&h);
    area=1.0/2.0*(a+b)*h;
    printf("result of area: %.2lf",area);


    return 0;
    
}
