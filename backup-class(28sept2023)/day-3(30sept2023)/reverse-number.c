//WAP to input a number, then display it's reverse

#include <stdio.h>

int main(){
    //input a number
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    //store the original value
    int original_num = num;

    //perform the operation to reverse the number
    int rev = 0;
    while(num > 0){
        //extract the last digit
        int digit = num % 10; //extract the last digit
        rev = rev * 10 + digit; //putting the extracted digit at the last
        num = num/10; //remove the last digit
    }

    //display the output
    printf("Original Number is : %d\n", original_num);
    printf("Reverse Number is: %d\n", rev);

    return 0;
}