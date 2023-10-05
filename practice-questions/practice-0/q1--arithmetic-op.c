//Program to input two numbers and perform operation +, -, *, /, %

#include <stdio.h>

int main(){
    //declare varaibles
    int num1, num2;

    //prompt user for input
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    //perform operations
    int sum = num1 + num2;
    int diff = num1 - num2;
    int prod = num1 * num2;
    int quot = num1 / num2;
    int rem = num1 % num2;

    //print results
    printf("\nSum: %d\n", sum);
    printf("Difference: %d\n", diff);
    printf("Product: %d\n", prod);
    printf("Quotient: %d\n", quot);
    printf("Remainder: %d\n", rem);

    return 0;
}