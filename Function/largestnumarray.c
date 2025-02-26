#include<stdio.h>
int largest_num(int array[], int n)
{
    int biggest=array[0];
    for(int i=0;i<n; i++)
    {

        if (array[i]>biggest)
        {
            biggest=array[i];
        }
        
    }
    return biggest;
}
int main ()
{
    int  n,largest;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int array[n] ;
    for (int j=0; j<n;j++)
    {
        printf("Enter the number of array");
        scanf(" %d",&array[j]);
    }
    for(int i=0; i<n;i++ )
    {
        printf("%d\n",array[i]);
    }
    largest = largest_num(array,n);
    printf(" The biggest number of this array is : %d \n",largest);

    return 0;
}