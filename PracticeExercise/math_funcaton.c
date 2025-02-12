#include<stdio.h>
#include<math.h>

int main (){

    // math function exponent(​x^y)
        // int x , y ,z;
        // printf("enter number of x:");
        // scanf("%d",&x);
        // printf("enter number of y:");
        // scanf("%d",&y);
        // z=pow(x,y);
        // printf("%d in the power of %d : is  %d ", x,y, z)
    // square root number store as internger the result won't give decimal 
        // int x,answer;
        // printf("enter the the number ");
        // scanf("%d",&x);
        // answer = sqrt(x);
        // printf("square root of %d is :%d ",x,answer);
    //store as double 
    // int x;
    // double answer ;
    // printf("enter the the number ");
    // scanf("%d",&x);
    // answer = sqrt(x);
    // printf("square root of %d is : %lf ",x,answer);

    //calculate the (x*y+y*z+z*x)^2
    // double x,y,z,calculate,answer;
    // printf("x:");
    // scanf("%lf",&x);
    // printf("y:");
    // scanf("%lf",&y);
    // printf("z:");
    // scanf("%lf",&z);
    // calculate=x*y+y*z+z*x;
    // answer=pow(calculate,2); 
    // printf("compute:The power of %.2lf is  %.2lf",calculate, answer);

    double x,y,result,xy ;
    printf("x:");
    scanf("%lf",&x);
    printf("y:");
    scanf("%lf",&y);
    // printf("z:");
    // scanf("%lf",&z);
    xy=x*y;
    // two=pow(xy,2);
    // three=pow(xy,3);
    // four=pow(xy,4);
    result=((pow(xy,2)+pow(xy,3)+pow(xy,4)));
    //xy+two+three+four;
   
    printf("compute:The result  %.2lf ",result);

    return 0; 
}