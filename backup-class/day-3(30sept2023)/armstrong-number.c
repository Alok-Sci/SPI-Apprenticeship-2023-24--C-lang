//WAP to input a number and check whether the given number is Armstrong or not
// 121 --> pow=pow(digit_count) --> 1^pow + 2^pow + 1^pow 

#include <stdio.h>
#include <math.h>

int main(){

//take input
    int num;
    printf("Enter a number to check if it's Armstrong Number:\n");
    scanf("%d", &num);

//store original number
    int original_num = num;

//count digit(s)
    int power = 0; //initialize digit
    while(num > 0){
        num = num / 10; //remove last digit
        power++; //increment digit
    }
    //num is 0 now //creating an error


//calculate sum
    num = original_num; //reputting the intial value of num
    int rem = 0;
    int sum = 0; //initialize sum
    while(num > 0){
        rem = num % 10; //extract last digit
        sum = sum + pow(rem, power); //calculate sum
        num =  num / 10; //remove last digit
    }

//compare the original number 
    if(sum == original_num){
        printf("%d is an Armstrong number", original_num);
    }
    else {
        printf("%d is not an Armstrong number", original_num);
    }

    return 0;
}
