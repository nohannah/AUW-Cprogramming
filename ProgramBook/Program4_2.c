// #include<stdio.h>
// // int main (void)
// // {
// //     int n , triangularnumber;
// //     for (n=1 ; n<=200 ; n=n+1) {

// //     triangularnumber=triangularnumber+n;

// //     }
// //     printf("the 200th triangle number is %i\n ", triangularnumber);

// //     return 0 ; 
// // }

// // int main ()
// // {
// //     int n ;
// //     int sum=0 ; 
// //     for ( int i=0 ; i<=10 ; i++)
// //     {
// //         sum= sum+i ;
// //     }
    
// //     printf("the sum %i\n", sum);
// // }

// int main ()
// {
//     int num ; 
//     int sum=0 ; 
//     printf("Enter the number:");
//     scanf("%d", &num);
//     for ( int i=0 ; i<=num ; i++)
//     {
//         printf("%i\n", i);
//         sum= sum+i ;
//     }
    
//     printf("the sum %i\n", sum);

// }
int main ()
{
    int n=10 , sum=0;
    int i ; 
    for (i=0;i<n;i++)
    {
        sum++;
    }
    if(sum%2==0)
    {
        printf("Even\n");
    }
    else 
    {
        printf("Odd\n");
    }
}