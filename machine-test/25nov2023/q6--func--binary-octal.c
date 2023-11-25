// 6. WAP to declare 2 functions:
// void binary(int n);
// void octal(int n);
// These functions will return the binary equivalent and octal equivalent numbers.

#include <stdio.h>

// function declaration
void binary(int);
void octal(int);
int rev(int);

// main function
int main(){

    int num;
    printf("Please enter a number:  \n");
    scanf("%d", &num);

    printf("\n");

    // find binary equivalent of a number
    binary(num);

    // find octal equivalent of a number
    octal(num);

    return 0;
}

//function to find the binary equivalent of a decimal value
void binary(int num){
    int rem, binary = 0;
    printf("Binary equivalent of %d:", num);
    while(num!=0){
        rem = num%2;
        binary = binary*10 + rem;
        num = num/2;
    }
    printf("%d", rev(binary));
    printf("\n");
}

// function to find the octal equivalent of a decimal value 
void octal(int num){
    int rem, octal = 0;
    printf("Octal equivalent of %d:", num);
    while(num!=0){
        rem = num%8;
        octal = octal*10 + rem;
        num = num/8;
    }
    printf("%d", rev(octal));
    printf("\n");
}


// function to reverse a number 
int rev(num){
    int reverse = 0;
    while(num > 0){
        int rem = num % 10;
        reverse = reverse * 10 + rem;
        num = num / 10;
    }
    return reverse;
}
