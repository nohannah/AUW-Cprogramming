#include <stdio.h>
int main() {
    int n , i , count=0;
    printf("Enter anynumber");
    scanf("%d",&n);
    for (i=1;i<=n ;i++)
    {
        printf("%d",i);

        if (i%5==0){
            count++; 
        }
    }
    printf("\nnumber that are divisible by 5 : %d",count);
    return 0; 
}