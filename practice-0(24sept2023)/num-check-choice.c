// WAP to input a number and check whether: 
// i.) It is divisible by both 5 and 7 
// ii.) It is divisible by 5 but not by 7 
// iii.) It is divisible by 7 but not by 5 
// iv.) Neither divisible by 5 nor by 7 

#include <stdio.h>

int main(){
    int num; 

    // input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // if num is divisible by 5 & 7
    if((num % 5 == 0) && (num % 7 == 0)){
        printf("%d is divisible by both 5 and 7", num);
    }

    // if num is divisible by 5, but not 7
    else if((num % 5 == 0) && (num % 7 != 0)){
        printf("%d is divisible by 5 but not by 7", num);
    }

    // if num is divisible by 7, but not 5
    else if((num % 5 != 0) && (num % 7 == 0)){
        printf("%d is divisible by 7 but not by 5", num);
    }

    // if num is neither divisibel by 5 nor by 7
    else if((num % 5 != 0) && (num % 7 != 0)){
        printf("%d is neither divisible by 5 nor by 7", num);
    }

}