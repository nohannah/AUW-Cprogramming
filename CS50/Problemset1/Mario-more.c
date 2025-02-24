//#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int heigth;
    do
    {
        heigth = get_int("Heigth:");
    }
    while (heigth < 1 || heigth > 8);

    for (int i = 1; i <= heigth; i++)
    {
        for (int j = 0; j < heigth - i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < i; k++)
        {
            printf("#");
        }
        printf("  ");
        for (int k = 0; k < i; k++)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}
