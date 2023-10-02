//WAP to input a number and create functions and check if its:
// i. prime number
// ii. perfect number
// iii. palindrome number
// iv. automorphic number
// v. neon number
// vi. armstrong number

#include <stdio.h>
#include <math.h>

void isPrime(int num){
    if(num <= 1){
        printf("%d is not a prime number\n", num);
    }
    else if(num <= 3){
        printf("%d is a prime number\n", num);
    }
    else if(num % 2 == 0 || num % 3 == 0){
        printf("%d is not a prime number\n", num);
    }
    else{
        printf("%d is a prime number\n", num);
    }
}

void isPerfect(int num) {
    int sum = 0;

    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    if (sum == num) {
        printf("%d is a perfect number\n", num);
    } else {
        printf("%d is not a perfect number\n", num);
    }
}

void isPalindrome(int num){
    int original_num = num;
    int reverse_num = 0;

    while(num > 0){
        int digit = num % 10;
        reverse_num = reverse_num * 10 + digit;
        num /= 10;
    }
    if(original_num == reverse_num){
        printf("%d is a palindrome number\n", original_num);
    }
    else{
        printf("%d is not a palindrome number\n", original_num);
    }
}

void isAutomorphic(int num){
    int square = num * num;
    int digit = square % 10;
    if(digit == num){
        printf("%d is an automorphic number\n", num);
    }
    else{
        printf("%d is not an automorphic number\n", num);
    }
}

void isNeon(int num){
    if(num == 0){
        printf("%d is not a neon number\n");
    }
    else {
        int square = num * num; //step 1: find square 
        int sum = 0;
        while(square > 0){
            int digit = square % 10; //step 2: breakdown numbers by dividing it by 10 in loop until it is 0
            sum += digit; //step 3: add the remainders one-by-one
            square /= 10; //exclude the last digit of the number
        }
        //display message according to the condition
        if(sum == num){
            printf("%d is a neon number\n", num);
        }
        else {
            printf("%d is not a neon number\n", num);
        }
    }  
}

void isArmstrong(int num){
    //store the given number for later use
    int original_num = num;
    int cube_sum = 0;

    while(num > 0){
        int digit = num % 10; //extract the last digit
        cube_sum += pow(digit, 3); //find cube of digit; add to cube_sum
        num /= 10; //remove the last digit 
    }

    //comparison of original_num and cube_sum
    if(original_num == cube_sum){
        printf("%d is an armstrong number\n", original_num);
    }
    else{
        printf("%d is not an armstrong number\n", original_num);
    }
}

int main(){
    //input a number
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    isPrime(num);
    isPerfect(num);
    isPalindrome(num);
    isAutomorphic(num);
    isNeon(num);
    isArmstrong(num);

    return 0;
}