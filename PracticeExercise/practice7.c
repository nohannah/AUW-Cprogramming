#include <stdio.h>

int main() {
    char W ;

    printf("Enter the character:");
    scanf("%c", &W);

    

    if (W=='M')
    {
        printf("Monday");
    }
    else if (W=='T')
    {
        printf("Tuesday");
    }
    else if (W=='W')
    {
        printf("Wenesday");
    }
    else if (W=='T')
    {
        printf("Thursday");
    }
    else if (W=='F')
    {
        printf("Friday");
    }
    else if (W=='S')
    {
        printf("Saturday");
    }
    else if (W=='U')
    {
        printf("Sunday");
    }
    else 
    {
        printf("invalid Charater");
    }
    return 0;
}