//WAP to input a number and check whether it is an Armstrong Number. For e.g. 1634

// Algorithm
// 1. input a number
// 2. count digit
// 3. calculate Armstrong
// 4. display whether it's armstrong or not 

#include <stdio.h>
#include <math.h>

void main(){

    // input a number
    printf("Enter a number: ");
    int num = 0;
    scanf("%d", &num); //153

    int original_num = num; //store number for later use //153

    //count digits
    int digit; //0
    for(digit=1; digit<=num; digit++){ 
        num /= 10;
    }

    num = original_num; //store original value in num

    //calculate armstrong
    int sum = 0; //0
    for(int i=0; i<=digit; i++){ //
        int rem = num % 10;
        sum = sum + pow(rem, digit);
        num /= 10;
    }

    //compare armstrong and display the message
    if(sum == original_num){
        printf("%d is an Armstrong number\n", original_num);
    }
    else {
        printf("%d is not an Armstrong number\n", original_num);
    }
}