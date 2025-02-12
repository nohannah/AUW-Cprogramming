#include <stdio.h>
#include <math.h>

int main()
{
   float x ,y ,result,p;
   
    printf("x:");
    scanf("%f",&x);
    printf("y:");
    scanf("%f",&y);
    p=pow(x,4);
    result= (3*p+2*(sqrt(x*y))-2);
    
    printf("the result is %.2f",result);
    return 0;
}
