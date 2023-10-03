// WAP to declare 2 functions:
// void binary(int n);
// void octal(int n);
// These functions will return the binary equivalent and octal equivalent numbers.


#include <stdio.h>

//Function to convert decimal to binary
void toBinary(int num){
    int binary[32];
    int i = 0;
    while(num > 0){
        binary[i] = num % 2;
        num /= 2;
        i++;
    }

    printf("\nBinary: ");
    for(int j = i - 1; j >= 0; j--){
        printf("%d", binary[j]);
    }
    printf("\n");
}

//Function to convert decimal to octal
void toOctal(int num){
    int octal[32];
    int i = 0;
    while(num > 0){
        octal[i] = num % 8;
        num /= 8;
        i++;
    }

    printf("\nOctal: ");
    for(int j = i - 1; j >= 0; j--){
        printf("%d", octal[j]);
    }
    printf("\n");
}


void main(){

    //input a decimal number
    printf("Enter a number: ");
    int num;    
    scanf("%d", &num);

    //display the number
    printf("\nDecimal: %d\n", num);
    //display the equivalentbinary
    toBinary(num);
    //display the equivalent octal
    toOctal(num);
}