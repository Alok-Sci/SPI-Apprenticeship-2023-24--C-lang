//WAP to create a calculator using functions 
// int calc()


#include <stdio.h>

//declare functions
void calc(char choice, int num1, int num2);
int add(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
int div(int num1, int num2);

void main(){
    int num1, num2;
    char choice;

    //choice input
    printf("\nEnter your choice:\n + \n - \n * \n / \n");
    scanf("%c", &choice);

    //first number input
    printf("\nEnter first number: ");
    scanf("%d", &num1);

    // second number input 
    printf("\nEnter second number: ");
    scanf("%d", &num2);

    //call calc function and pass choice, num1, num2 as arguments
    calc(choice, num1, num2);
}

//Function definitions
// Function to add two numbers 
int add(int num1, int num2){
    return num1+num2;
}

// Function to subtract two numbers 
int sub(int num1, int num2){
    return num1-num2;
}

// Function to multiply two numbers 
int mul(int num1, int num2){
    return num1*num2;
}

// Function to divide two numbers 
int div(int num1, int num2){
    return num1/num2;
}

// Function to calculate the result according to the user's choice
void calc(char choice, int num1, int num2){
    switch(choice){
        case '+':
            printf("Sum = %d \n", add(num1, num2));
            break;
        case '-':
            printf("Difference = %d \n", sub(num1, num2));
            break;
        case '*':
            printf("Product = %d \n", mul(num1, num2));
            break;
        case '/':
            printf("Quotient = %d \n", div(num1, num2));
            break;
        default:
            printf("Invalid selection!!");
    }
}
