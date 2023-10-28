#include <stdio.h>

int main(){
    int celsius; 
    double Farenheit;

    printf("Enteer the celsius temperature:");
    scanf("%d",&celsius);
    Farenheit=9/5 * celsius +32;
    
    if (Farenheit >90)
    {
        printf("heat warning");
    }
    else if (Farenheit<30)
    {
        printf("Cold warning ");
    }
    else 
    {
        printf("normal Temperature");
    }
    return 0; 
}