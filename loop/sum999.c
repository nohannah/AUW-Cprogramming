#include<stdio.h>

int main(){
    int i ,n, sum=0 ;
    printf("enter the number:");
    scanf("%d",&n);

    for(i=9 ; i<=n ;i=(i*10)+9)
    {
        sum=sum+i;
    }
    printf("%d",sum);
   if(sum%5==0)
        {
            printf("Sum-agentina");
        }
        else{
            printf("Sum-Brazil");
        }
}