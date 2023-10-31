#include <stdio.h> 

int main (){
    int num;
    printf("Enter the number:");
    scanf("%d", &num);

    if (num>=1 && num<=200)
    {

        if ( num%2==!0 && num>100)
        {
            printf("Cprogrammin");
        }
        else if (num%2==0 && num<50)
        {
            printf("python");
        }
        else if (num%2==!0 && 10>num<75)
        {
            printf("java");
        }
    }
    else 
    {
        printf("invalid number");
    }
}