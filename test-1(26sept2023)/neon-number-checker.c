/*
learnt: ternary operator

syntax: condition ? if-block-code : else-block-code;

*/

//WAP to input a number and check whether it is a Neon number or not
//Neon number : 9
// 9--9*9--81--8+1--9 (whose square's digit's sum is equal to the original number)

#include <stdio.h>

// Function to check whether a number is neon number or not 
void isNeon(int num){
    if(num == 0){
        printf("\n%d is not a neon number");
    }
    else {
        int num_square = num * num; //step 1: find square 

        int num_sum = 0;
        int remainder = num_square;
        while(remainder>0){
            int digit = remainder % 10; //step 2: breakdown numbers by dividing it by 10 in loop until it is 0
            num_sum += digit; //step 3: add the remainders one-by-one
            remainder /= 10; //exclude the last digit of the number
        }
        //display message according to the condition
        if(num_sum == num){
            printf("\n%ld is a neon number", num);
        }
        else {
            printf("\n%ld is not a neon number", num);
        }
    }
}

// Function to calculate the neon number in a range of numbers 
void findNeonNums(int start_num, int end_num){
    for(int i=start_num; i<=end_num; i++){
        int num_square = i*i; //step 1: find square 

        int num_sum = 0;
        int remainder = num_square;
        while(remainder>0){
            int digit = remainder % 10; //step 2: breakdown numbers by dividing it by 10 in loop until it is 0
            num_sum += digit; //step 3: add the remainders one-by-one
            remainder /= 10; //exclude the last digit of the number
        }
        if(num_sum == i){
            printf("\n%d is a neon number", i);
        }
    }
}

int main(){
    int num;
    printf("\nEnter a number to check if its a neon number or not: ");
    scanf("%d", &num);

    //Find neon number
    isNeon(num);


    int start_num;
    int end_num;
    printf("\nEnter the starting number to check if its a neon number or not: ");
    scanf("%d", &start_num);
    printf("\nEnter the ending number to check if its a neon number or not: ");
    scanf("%d", &end_num);

    //find neon number between the given range [findNeonNums(start_num, end_num)]
    findNeonNums(start_num, end_num);

    return 0;
}