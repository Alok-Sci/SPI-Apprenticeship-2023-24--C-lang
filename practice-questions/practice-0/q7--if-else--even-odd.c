//Program to input a number and check whether it is even or odd

#include <stdio.h>

void main(){
    //declare variable
    int num;

    //prompt for input
    printf("Enter a number: ");
    scanf("%d", &num);

    //check if even or odd
    if(num%2 == 0)
    printf("%d is even", num); //if statement without curly braces
    
    else
    printf("%d is odd", num); //this doesn't produce any error
    
}