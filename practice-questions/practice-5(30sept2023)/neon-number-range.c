// WAP to find neon numbers between the range of 1 to 100
//neon number 9 --> 9*9 --> 81 --> 8+1 --> 9 

// Algorithm 
// 1. input a number
// 2. square the number
// 3. extract the remainder
// 4. sum the extracted number
// 5. compare original number with the sum
// 6. if same display it's neon number


#include <stdio.h>

void main(){

    //initialize the range
    int range = 100;

    //for loop to extract and sum the digits
    for(int i=0; i<range; i++){

        //square the number
        int sq = i*i;

        int sum = 0; //reset the sum
        while(sq > 0){
            int digit = sq % 10; //extract the last digit 
            sum += digit; //add the extracted digit to sum 
            sq /= 10; //remove the last digit
        }

        //display whether or not a number is neon number
        if(sum == i){
            printf("%d is a neon number\n", i);
        }
        else {
            printf("%d is not a neon number\n", i);
        }
    }



}