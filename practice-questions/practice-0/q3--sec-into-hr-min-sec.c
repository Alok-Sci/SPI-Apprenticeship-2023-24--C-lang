//Program to enter time in second and convert it into hours, minutes and seconds.

#include <stdio.h>

void main(){
    //declare variables
    int sec;

    //prompt user to enter time in seconds
    printf("Enter time in seconds: ");
    scanf("%d", &sec);

    //calculate hours, minutes and seconds
    int hours = sec/3600;
    int minutes = (sec%3600)/60;
    int seconds = (sec%3600)%60;

    //print result
    printf("Time in hours, minutes and seconds: %d hr:%d min:%d sec", hours, minutes, seconds);
}