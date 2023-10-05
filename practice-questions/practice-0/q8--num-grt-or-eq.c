//Program to input two numbers and check if the first number is greater or equal to the second number.

#include<stdio.h>

void main(){
    //declare variable
    int num1, num2;

    //prompt for input
    printf("Enter number 1: ");
    scanf("%d", &num1);
    printf("Enter number 2: ");
    scanf("%d", &num2);

    //perform conditional check
    if(num1 >= num2){
        printf("%d >= %d", num1, num2);
    }
    else{
        printf("%d < %d", num1, num2);
    }

}