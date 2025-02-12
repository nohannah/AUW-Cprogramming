#include <stdio.h> 

int main (){
    int year ;
    printf("Enter the year:");
    scanf("%d",year); 

    if ((year%4==0) && (year%100==!0) || (year%400==0)){
        printf("Leap year");

    }
    else {
        printf("not leap year");
    }
    // //using elseif 
    // if (year%4==0 && year%100!=0)
    // {
    //     printf("Leap year");
    // }
    // else if( year%400==0){
    //     prinft ("leap year");
    // }
    // else {
    //     printf("not leap year");
    // }

    return 0;
}