#include <stdio.h> 

int main (){

    int n1 ,i,n2;

    printf("n1");
    scanf("%d",&n1);
    printf("n2");
    scanf("%d",&n2);

    for (i=n1 ; i<=n2 ; i++)
    {
        printf("%d", i);
    }
    return 0 ; 
}