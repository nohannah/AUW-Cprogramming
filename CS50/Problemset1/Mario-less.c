
#include <stdio.h>
// #
// ##
// ###
// ####
// #####
// ######
// #######
// ########
// int main(){
//     for (int i=0; i<8; i++)
//     {
//         for(int j=0;j<=i;j++)
//         {
//             printf("#");
//         }
//         printf("\n");
//     }
// }
int main()
{
    int n;
    do
    {
        int n=input("Get the number:");
        printf("%d",n);
    }
    while (n<0);
     for (int i=0; i<n; i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
