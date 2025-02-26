#include<stdio.h>
int count_num(int n)
{
    int count=0;
    for (int i=0 ; i<n ; i++)
    {
        printf("%d",i);
        if(i%3==0 || i%5==0)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int n, result; 
    printf("Enther the number:");
    scanf("%d",&n);
    result = count_num(n);
    printf("%d\n",result);
    return 0; 
}