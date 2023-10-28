#include <stdio.h>
 int main(){
    int m , a, F;

    printf("Enter number of mass:");
    scanf("%d",&m);
    printf("Enter number of acceleration:");
    scanf("%d",&a);
    F=m*a;
    if (F>50)
    {
        printf ("Ok");
    }
    else 
    {
        printf(" Need more force");

    }

    return 0;
 }