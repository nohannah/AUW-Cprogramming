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

     //area of triangle 
    // int a,b,h ;
    // double area;
    // printf("enter num of a:");
    // scanf("%d",&a);
    // printf("enter num of b:");
    // scanf("%d",&b);
    // printf("enter num of h:");
    // scanf("%d",&h);
    // area=1.0/2.0*(a+b)*h;
    // printf("result of area: %.2lf",area);

        // math function 
        int x , y ,z;
        printf("enter number of x:");
        scanf("%d",&x);
        printf("enter number of y:");
        scanf("%d",&y);
        z=pow(x,y);
        printf("%d in the power of %d : is  %d ", x,y, z);
    return 0;
    
}
