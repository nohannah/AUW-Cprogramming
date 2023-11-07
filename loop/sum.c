#include <stdio.h>

int main() {
    int num, i, sum = 0;

    printf("Enter the number: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++) { // Fix the loop condition
        int term = 3 * (i - 1) + 1;
        printf("%d", term);


        sum += term;
    }
    printf("\nSum: %d", sum);

    return 0;
}

    
