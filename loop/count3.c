#include<stdio.h>
int main(){
    int i, count=0,sum=0;
    
   
        for(i=100;i<200;i++)
        {
            if(i%9==0)
            {
                 printf("\n%d",i);
                sum=sum+i;
               
            }

        }
       printf("\n%dsum",sum);
       return 0;
}
    