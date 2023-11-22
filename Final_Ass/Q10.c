#include<stdio.h>
//1 + 3 + 5 + 7 + ………………….. + n
int main(){
    int n,i,sum=0;
    printf("Enter any number:");
    scanf("%d",&n);
    for(i=1 ;i<=n;i=i+2)
    {
        sum=sum+i;
       

    }
    // printf("%d",sum);

    return 0;
}