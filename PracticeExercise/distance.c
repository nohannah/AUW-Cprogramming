#include<stdio.h>

int main()
{
    double distance,fuelcost ,fuelcostpergallon,fuelefficienty;

    printf("Enter the distance of the trip (in miles): ");
    scanf("%lf", &distance);
    printf("Enter the fuel efficiency of your vehicle (in miles per gallon): ");
    scanf("%lf", &fuelefficienty);
    printf("Enter the fuel cost per gallon (in dollars): ");
    scanf("%lf", &fuelcostpergallon);

    fuelcost=fuelcostpergallon*(distance/fuelefficienty);
    printf("%.2lf",fuelcost);
    
    
    
    }