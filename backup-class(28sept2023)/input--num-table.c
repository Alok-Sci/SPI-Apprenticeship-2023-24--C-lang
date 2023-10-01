//WAP to input a number, and print its table

#include <stdio.h>

int main(){
    int num, i=1;
    printf("Number to find table of: \n");
    scanf("%d", &num);

//enter the number to multiply with
    int num2;
    printf("Number to find table to: \n");
    scanf("%d", &num2);

    printf("Table of %d is: \n", num);
    while(i<=num2){
        printf("%d X %d = %d\n", num, i, num*i);
        i++;
    }
    
}