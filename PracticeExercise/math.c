#include<stdio.h>
#include<math.h>
int main ()
{
    int x,y,z;
    double result;
    printf("Enter X Y X:");
    scanf("%d%d%d", &x,&y,&z);
    result=pow(x,3)+3*pow(x,2)+y+sqrt(z);
    printf("%.2lf",result); 
}