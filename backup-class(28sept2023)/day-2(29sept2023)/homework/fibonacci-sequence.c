//WAP to input a number and check whether it is a fibonacci number.
/*
formula: Fn = F(n-1)+ F(n-2);
*/

/*
Algorithm 
1. input a number
2. write the formula
3. display the result
*/

#include <stdio.h>

void main(){

    int cycles;
    printf("Enter the fibonacci numbers to print: \n");
    scanf("%d", &cycles);
    long long int prev = 0, next = 1;

    printf("%lld \n", prev);
    for(int i = 0; i <= cycles; i++){
        printf("%lld \n", next);
        next += prev; //find the next number
        prev = next;
    }
}