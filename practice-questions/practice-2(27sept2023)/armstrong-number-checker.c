//WAP to input a number and check whether the number is armstrong number
// 153 --> 1^3 + 5^3 + 3^3 --> 1 + 125 + 27 --> 153

/*
Algorithm

1. input a number 
2. store the number for later comparison use
3. declare cube_sum variable and initialize it with 0
4. start while loop with condition (num > 0)
5. extract the last digit from the number [digit = num % 10]
6. cube the digit, and store it in sum variable [cube_sum = pow(digit, 3)]
7. remove the last digit from the number [num = num / 10]
8. end while loop
9. compare original number and cube_sum
10. display the output

*/

#include <stdio.h>
#include <math.h>

int main(){

//input a number
    int num;
    printf("\nEnter a number to check if it's armstrong: \n");
    scanf("%d", &num);

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
        printf("%d is an armstrong number", original_num);
    }
    else{
        printf("%d is not an armstrong number", original_num);
    }

    return 0;
    
}