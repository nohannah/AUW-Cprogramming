#include <stdio.h>

int main(){
    // //find the largest number 
    // int num1,num2;
    // printf("enter the number1");
    // scanf("%d", &num1);
    // printf("enter the number2");
    // scanf("%d", &num2);
    // if(num1>num2 )
    // {
    //     printf("%d",num1);
    // }
    // else   
    // {
    //     printf("%d",num2);
    // }

    //enter the number to show the day
    int day ; 
    printf("Enter the number of the day:");
    scanf("%d",&day);

    if (day==1)
    {
        printf("saturday");
    }
    else if (day==2)
    {
        printf("sunday");
    }
     else if (day==3)
    {
        printf("Monday");
    }
     else if (day==4)
    {
        printf("Tueday");
    }
     else if (day==5)
    {
        printf("Wenesday");
    }
     else if (day==6)
    {
        printf("Thursday");
    }
     else if (day==7)
    {
        printf("Friday");
    }
    else
    {
        printf("no in a week");
    }
    return 0;
}