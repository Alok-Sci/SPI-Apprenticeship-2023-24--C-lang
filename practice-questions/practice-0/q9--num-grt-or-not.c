//Program to check whether a number is greater than the other number or not

#include <stdio.h>

void main(){
    //declare variables
    int n1, n2;

    //prompt user for first number
    printf("Enter the first number: ");
    scanf("%d", &n1);
    //prompt user for second number
    printf("Enter the second number: ");
    scanf("%d", &n2);

    //conditional check
    if(n1 > n2){
        printf("%d > %d", n1, n2);
    }
    else {
        printf("%d !> %d", n1, n2);
    }

}