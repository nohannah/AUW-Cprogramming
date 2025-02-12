#include<stdio.h> 
#include<math.h>
int main(){
    int x,y,z;
    double result;
    printf("Enter number of X:");
    scanf("%d",&x);
    printf("Enter number of  Y :");
    scanf("%d",&y);
    printf("Enter number of Z:");
    scanf("%d",&z);
    result=((pow((x*y),3))-3*x*sqrt(z)+3*y+z);
    printf("%.4lf",result);

    return 0;
}