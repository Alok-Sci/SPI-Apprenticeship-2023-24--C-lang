//WAP to check whether the given number is a prime number.

/*
--Algorithm--

1. input a number
2. if the number is less than or is 1, if the number is divisible by 2 or 3 then it's a prime number, else it's prime number
3. if the number is 2 or 3 then it's prime number
4. display the output

*/

#include <stdio.h>

int main(){
    int num;

    printf("--Check whether the given number is a prime number--");
    printf("Enter a number: ");
    scanf("%d", &num);

//if number is less than or is 1
    if(num <= 1){
        printf("%d is not a prime number", num);
    }
//if number is 2 or 3
    else if(num <= 3){
        printf("%d is a prime number", num);
    }
//if number is divisible by 2 or 3
    else if((num % 2 == 0) || (num % 3 == 0)){
        printf("%d is not a prime number", num);
    }
    else{
        printf("%d is a prime number", num);
    }

    return 0;

}