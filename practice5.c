#include <stdio.h> 
int main ()
{
    int num1 , num2;
    printf("enter num1 and num2:");
    scanf("%d%d",&num1,&num2);

    if (num1==num2)
    {
        printf("equal");
    }
    else
    {
        if(num1<num2)
        {
            printf("less");

        }
        else 
        {
            printf("greater");
        }
        

    }
}