#include<stdio.h>
int main(){
    int i,n,pro;
    printf("Enter any number:");
    scanf("%d",&n);
    for (i=1;i<=10;i++)
    {
        pro=n*i;
        printf("\n%d*%d=%d",n,i,pro);
    }
    return 0;
}