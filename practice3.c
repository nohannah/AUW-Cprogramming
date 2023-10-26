#include <stdio.h>
#include <math.h>

int main()
{
   float x ,y ,z,result;
   
    printf("x:");
    scanf("%f",&x);
    printf("y:");
    scanf("%f",&y);
    printf("z:");
    scanf("%f",&z);
    result= (3*(pow(x,4))+2*sqrt(x*y)-cbrt(z)+5*x*y);
    
    printf("the result is %f",result);
    return 0;
}
