#include<stdio.h>
#include<math.h>
int main(){
    int i,n,s,c;
    printf("Enter the number");
    scanf("%d",&n);
     // Header for the table
    printf("Number\tSquare\tCube\n");

    for (i=1;i<=n;i++)
    {   
         printf("%d\t%d\t%d\n", i, i * i, i * i * i);
     
    }
    
     
    return 0;
}