#include<cs50.h>
#include<stdio.h>
#include<math.h>

float harmonic (int n)
{
    float sum=0;
    for(int i=1 ; i<=n ; i++)
    {
        sum += 1.0/i;
        
    }
    return sum;
}

int main()
{
    int n=get_int("Enter the number:");
    float result=harmonic(n);
    printf("The result %f\n", result);


}
