#include <stdio.h>
int main (){
    int i , n , count=0;
    printf("Enter any number: ");
    scanf("%d", &n);
    for (i=1;i<=n ;i++)
    {
        printf("%d",i);
        if(i%5==0 || i%3==0)
        {
            count=count+1;

        }
    }
    printf("\nTotal count : %d", count);
    return 0 ; 
}