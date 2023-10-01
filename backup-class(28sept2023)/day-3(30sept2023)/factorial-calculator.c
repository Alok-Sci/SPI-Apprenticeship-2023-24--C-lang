//WAP to input a number and find factorial of a given number

#include <stdio.h>

int main(){
    int num;

    printf("\nFind factorial of: ");
    scanf("%d", &num);

    //storing the number
    int original_num = num;


    int fact = 1; //5
    for(num; num > 0; num--){
        fact = fact * num;
    }
    printf("%d is the factorial of %d", fact, original_num);

    return 0;
}