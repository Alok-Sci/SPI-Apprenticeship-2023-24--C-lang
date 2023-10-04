//WAP in c to create a simple calculator use call by reerence

#include <stdio.h>


int add(int *num1, int *num2);

//global variable
int num3=0;
int *sum = &num3;


int main(){

    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    add(&num1, &num2);

    printf("The sum of %d and %d is %d", num1, num2, *sum);
}

int add(int *num1, int *num2){
    *sum = *num1 + *num2; 
}