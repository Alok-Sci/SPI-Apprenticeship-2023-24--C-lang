//WAP to practice recursion 

#include <stdio.h>

//fact() is recursive function
int fact(int n){
    if(n == 1){
        return 1;
    }
    else{
        n *= fact(n-1); //recursion
        return n;
    }
}

void main(){
    // input a number 
    printf("\nEnter the number to find factorial: ");
    int num;
    scanf("%d", &num);

    // display the output 
    printf("Factorial of %d is %d", num, fact(num));
}
