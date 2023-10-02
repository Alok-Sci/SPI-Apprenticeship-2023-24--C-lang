//Ques: WAP to check whether or not a number is prime palindrome
//prime palindrome number = a number is both a prime number as well as a palindrome.
/*
Ques: What is a prime number?
Ans: The number which is 
*/



#include <stdio.h>


// Function to check whether a number is Prime number 
int isPrime(int num){

    if(num <= 1){
        return 0; //num is not prime
    }
    else if(num <= 3){
        return 1; //num is prime
    }
    else if(num % 2 == 0 || num % 3 == 0){
        return 0; //num is not prime
    }

    // return the value 
    return 1;
}


// Function to check whether a number is Palindrome number 
int isPalindrome(int num){
    int original_num = num;
    int reversed_num = 0;

    // reverse the number
    while(num>0){
        int digit = num % 10;
        reversed_num = reversed_num * 10 + digit;
        num /= 10;
    }

    //evaluate whether the original number is equal to the reversed number
    if(original_num == reversed_num){
        return 1; //num is palindrome
    }
    else{
        return 0; //num is not a palindrome
    }

    // return the value
    return 1;
}

int main(){
    int num;

// Getting user-input for a number 
    printf("\nEnter the number to check whether it's a prime palindrome or not: ");
    scanf("%d", &num);

    // if the num is prime then test whether it is palindrome or not 
    if(isPrime(num) == 1){
        //if the num is prime, and is palindrome as well
        if(isPalindrome(num) == 1){
            printf("\n%d is a prime palindrome number.", num);
        }
        //if the num is prime, but not palindrome
        else {
            printf("\n%d is a prime number but not a palindrome.", num);
        }
    }
    //if the num is neither prime nor palindrome
    else {
        printf("\n%d is not a prime palindrome number.", num);
    }

    return 0;
}