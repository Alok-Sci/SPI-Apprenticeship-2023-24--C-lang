//Program to enter days and output comes in years, months, weeks, and days.

#include <stdio.h>

void main(){
    //declar variables
    int days, years, months, weeks;

    //prompt user for input
    printf("Enter days: ");
    scanf("%d", &days);

    //calculation
    years = days/365;
    months = (days%365)/30;
    weeks = ((days%365)%30)/7;
    days = ((days%365)%30)%7;

    //print output
    printf("%d days = %d years, %d months, %d weeks, %d days", days, years, months, weeks, days);
}