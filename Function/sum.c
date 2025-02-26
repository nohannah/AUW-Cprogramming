#include<stdio.h>
#include<math.h>
int sum(int a , int b);
int main ()
{
    int a,b , result;
    //int result = sum(1,3);
    printf("Enter the number :");
    scanf("%d",&a);
    printf("Enter the numbr :");
    scanf("%d",&b);
    result=sum(a,b);//call the function
    printf("%d", result);
    return 0 ;
}

int sum(int a , int b)
{
    return a+b;
}
