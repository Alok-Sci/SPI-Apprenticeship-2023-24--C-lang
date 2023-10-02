// WAP to find if the given number is even or odd 
// numbers which are divisible by 2 are even,
// numbers which are not divisible by 2 are odd, except 0.

#include <stdio.h>

int main(){
    int num;

    //number input 
    printf("Enter the number to check whether a number is even or odd: ");
    scanf("%d", &num);

    //check if the number is 0
    if(num == 0){
        printf("%d is neither even nor odd.", num);
    }
    //evaluate an even number
    else if(num % 2 == 0){
        printf("%d is an even number.", num);
    }
    //evaluate an odd number
    else{
        printf("%d is an odd number.", num);
    }

    return 0;
}