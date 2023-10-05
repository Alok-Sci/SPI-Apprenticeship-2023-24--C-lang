//Program to input time in second and convert it into minutes and seconds

#include <stdio.h>

int main(){
    //declare variables
    int sec;

    //prompt user for input
    printf("Enter time in seconds: ");
    scanf("%d", &sec);

    //perform arithmetic operations
    int min = sec/60; //minute calculation
    sec = sec%60; //remaining seconds calculation

    //display results
    printf("Time in minutes and seconds: %d min %d sec", min, sec);

    return 0;
}