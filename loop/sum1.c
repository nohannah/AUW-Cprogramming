#include<stdio.h>

int main() {
    int i, n;
    double sum = 0;

    printf("Enter the number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum = 1.0 / i; 
         sum++; 
    }
    
    printf("%lf", sum);
    return 0;
}