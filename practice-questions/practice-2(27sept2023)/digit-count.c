//WAP to count the given digit

/*
--Algorithm--
1. take input from user.
2. create a digit variable.
3. divide the number by 10.
4. increment the digit.

num = 11
count = 3
num = 1
count = 4
num = 0
*/


#include <stdio.h>

int main(){
    long long num; //long long is used for large numbers, like 10^18.

    //number input
    printf("Enter the number to count digits in it: ");
    scanf("%lld", &num);

    //storing the actual number for future use.
    long long original_num = num;

    //count digits
    int digit = 0; // initialize the number of digit to 0
    while(num > 0){
        num /= 10; // remove the last digit from the given number
        digit++; // increment the digit count
    }

    // display the digits that the given number has.
    printf("%lld is your input number, it has %d digits.", original_num, digit);

    return 0;

}