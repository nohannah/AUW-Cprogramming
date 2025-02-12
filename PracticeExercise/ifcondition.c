#include<stdio.h>
int main(){
    int x,y;
    printf("Enter x and y:");
    scanf("%d%d",&x,&y);
    if(x>1 && x< 200)
    {
        if(x%2!=0 && x>y)
        {
            printf("Print Ubuntu");
        }
        else if (x%2==0 && y%5==0)
        {
            printf("Linux Mint");
        }
        else if ((x>=1 && x<=10) && y%2!=0){
            printf("Zorin OS");
        }
        else if(x%3==0 || y>10){
            printf("Arch Linux");
        }
    }
    else {
        printf("Window OS");
    }
    return 0;
}