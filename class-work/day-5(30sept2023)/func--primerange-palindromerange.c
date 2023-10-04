//WAP to create following functions:
//void primerange(int num)
//void palindromerange(int num)

// prime number condition
// - a prime number is only divisible by itself and 1 

// palindrome condition 
// - palindrome number is similar to its reverse 

#include <stdio.h>

//declare primeRange()
void primeRange(int range);
//declare palindromeRange()
void palindromeRange(int);


void main(){

    //set the range 
    int range = 100;

    // call the primeRange and palindromeRange
    primeRange(range);
    palindromeRange(range);

}

// Function to check whether or not a number is prime
void primeRange(int range){
    for(int i=1; i<range; i++){
        int count = 0; //reset count
        for(int j=1; j<=i; j++){
            //if j is fully divisible by i
            if(i%j == 0){
                count++; //increment count
            }
        }
        //if j is divisible by only two numbers
        if(count == 2){
            printf("%d is a prime number\n", i);
        }
    }
}

// Function to check whether or not a number is palindrome
void palindromeRange(int range){
    for(int i=1; i<range; i++){
        int num = i; //for later use
        int rev = 0; //reset rev

        for(int j=i; j>0; j/=10){
            int digit = j % 10; //extract last digit
            rev = rev*10 + digit; 
        }
        // if initial number is equal to its reverse 
        if(num == rev){
            printf("%d is a palindrome\n", num);
        }
    }


}