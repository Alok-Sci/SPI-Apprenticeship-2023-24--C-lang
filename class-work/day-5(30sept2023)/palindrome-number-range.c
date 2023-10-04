//WAP to find out the palindrom numbers between a range

#include <stdio.h>

int main(){
    //input a range
    int range;
    printf("\nEnter the range: ");
    scanf("%d", &range);

    for(int i=0; i<=range; i++){
        int rev = 0; //reset rev
        for(int j=i; j>0; j=j/10){
            int digit = j % 10; //extract last digit
            rev = rev*10 + digit; //add the extracted digit to the last
        }
        //if the number is equal to its reverse
        if(rev == i){
            printf("\n%d is a palindrome", i);
        }
    }
}