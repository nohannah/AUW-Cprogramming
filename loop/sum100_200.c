#include<stdio.h> 

int main (){
    int  sum=0 , i; 

    for (i=100 ; i<200 ; i++)
    {
        if (i%9==0)
        {
            printf(" %d\n",i);
            sum +=i;
            
        }
    }
     printf("%d",sum);
    return 0;
}