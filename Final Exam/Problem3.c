#include<stdio.h>
int main(){
    int i ; 

    for (i=1 ;i<=20 ; i++)
    {       
        
            if (i%4==0){
                printf("\nFizz");
                continue;
            }
            else if (i%5==0){
                printf("\nBuzz");
                continue;
            }
            else if (i%5==0 && i%4==0)
            {
                printf("\nFizzBuzz");
                continue;
            }
            printf("\n%d",i);

    }
    return 0;
}