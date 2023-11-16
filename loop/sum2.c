#include<stdio.h>
#include<math.h>

int main() {
    int i, n;
    double sum = 0;

    printf("Enter the number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i=i+2) {
        sum = 1.0 /sqrt(i) ; 
         sum++; 
    }
    
    printf("%lf", sum);
    return 0;
}