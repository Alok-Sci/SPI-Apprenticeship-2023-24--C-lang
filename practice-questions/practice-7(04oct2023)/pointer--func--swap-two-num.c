//WAP to swap two numbers using pointer and function.

#include <stdio.h>

//global variable
int num1, num2;

//declaring swap() function
void swap(int *, int *);

void main(){
    //input first number
    printf("Enter first number: ");
    scanf("%d", &num1);

    //store the memory address of num1 in *n1 pointer
    int *n1 = &num1;

    //input second number
    printf("Enter second number: ");
    scanf("%d", &num2);

    //store the memory address of num2 in *n2 pointer
    int *n2 = &num2;

    //display the numbers before swapping
    printf("Before swapping: \n");
    printf("First number: %d\n", *n1);
    printf("Second number: %d\n", *n2);

    //display the numbers after swapping
    printf("\nAfter swapping: \n");
    swap(&num1, &num2);
    printf("First number: %d\n", *n1);
    printf("Second number: %d\n", *n2);

    
}

//Function to swap two numbers
void swap(int *n1, int *n2){
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}