#include <stdio.h>

int main(){
    int i , n , sum=0;

    printf("enter the number:");
    scanf("%d",&n);

    for (i=1; i<=n ; i=i+2) 
    {
        sum=sum+i;

        
    }
    printf("\nSum=  %d", sum);
    if (sum%2==!0 && sum >50)
        {
            printf("OK");
        }
        else {
            printf("\nNot");
        }
    

    return 0; 
}