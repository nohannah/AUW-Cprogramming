#include<stdio.h> 
int main (){
    int x,y,a;
     printf("Enter number of X , Y , Age:");
    scanf("%d %d %d",&x,&y,&a);

    if (a>x && a<y){
        printf("Yes");
    }
    else {
        printf("No");
    }
    return 0;

}