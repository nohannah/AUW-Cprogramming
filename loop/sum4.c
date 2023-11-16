#include<stdio.h>
int main ()
{
    int n, i ,s, sum=0; 

    printf("Enter the number:");
    scanf("%d", &n);

    for (i=9; i<=n ; i=(i*10)+9) // pattern 
    {
        printf("%d ",i);

        sum=sum+i; 
                
        //t=t*mul+9;
       
    }
    printf("\n%d",sum);
}