#include<stdio.h>
int count_num(int n);

int main()
{
    int n ,result;
    printf("Enter the number:");
    scanf("%d",&n);
    result=count_num(n);
    printf("%d",result);

    return 0;

}

int count_num(int n)
{
    
    int count=0;
    for (int i=0 ; i<n ; i++)
    {
        printf("%d\n",i);
        if(i%5==0)
        {
            count++;
        }

    }
    return count;
}