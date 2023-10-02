//WAP to input a number, and to check whether the given number is a palindrome
// 141 --> reverse --> 141 

/*
Algorithm:

1. input a number
2. store the number to another variable to compare it later
3. start while loop with condition (num > 0)
4. create a remainder variable, initialize it with 0
5. extract the last digit from the number, store it in digit variable [digit = num % 10]
6. store the digit into remainder [remainder *= 10 + digit]
7. remove the last digit from the number [num \= 10]
8. end while loop
9. compare original number and number stored in remainder
10. display the output

*/

#include <stdio.h>

int main(){

// input number
    int num;
    printf("Enter the number to check whether it's palindrome: ");
    scanf("%d", &num);

// declare and initialize original_num and reversed_num 
    int original_num = num;
    int reversed_num = 0;

    while(num > 0){
        int digit = num % 10; //extract the last digit 
        reversed_num = reversed_num * 10 + digit; //store the digit in reversed order
        num /= 10; //remove the last digit
    }

//original number and reversed number comparison
    if(original_num == reversed_num){
        printf("%d is a palindrome", original_num);
    }
    else {
        printf("%d is not a palindrome", original_num);
    }

    return 0;
}