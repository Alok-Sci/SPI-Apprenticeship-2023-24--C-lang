//Program to enter days and output comes in years, months, days

#include <stdio.h>

void main(){

    //declaring variables
    int days, years, months;

    //prompt user for input
    printf("Enter days: ");
    scanf("%d", &days);

    //calculations
    years = days/365; //365 days == 1 yr
    months = (days%365)/30; //30 days == 1 mth
    days = days%365%30; //remaining days

    //printing results
    printf("%d days = %d years, %d months, %d days", days, years, months, days);

}