#include <stdio.h>
int main (){
    int i , n, count=0;
    printf("Enter any number: ");
    scanf("%d", &n);
    for (i=1; i<=n ; i=i+3){
        printf("%d", i);
        if (i%2==0)
        {
            count++;
        }
    }
    printf("\nThe even number is %d",count);
    return 0; 
}