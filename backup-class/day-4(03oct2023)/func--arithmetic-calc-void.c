//WAP to create a function that outputs the sum of two values

#include <stdio.h>

//declaration of add function
void add(int a, int b);
void dif(int a, int b);
void mul(int a, int b);
void div(int a, int b);

void main(){
    //input first number
    printf("Enter first number: ");
    int num1;
    scanf("%d", &num1);

    //input second number
    printf("Enter first number: ");
    int num2;
    scanf("%d", &num2);

    //calling a function
    add(num1, num2); //passing arguments
    dif(num1, num2); //passing arguments
    mul(num1, num2); //passing arguments
    div(num1, num2); //passing arguments
}

//definition of add function
//Function to add two numbers
void add(int a, int b){ //passing parameters
    printf("%d + %d = %d\n", a, b, a+b);
}
//Function to subtract two numbers
void dif(int a, int b){ //passing parameters
    printf("%d - %d = %d\n", a, b, a-b);
}
//Function to multiply two numbers
void mul(int a, int b){ //passing parameters
    printf("%d * %d = %d\n", a, b, a*b);
}
//Function to division two numbers
void div(int a, int b){ //passing parameters
    printf("%d / %d = %d\n", a, b, a/b);
}