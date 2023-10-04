//WAP to take range as input and display all the prime numbers within that range.

#include <stdio.h>

int main(){
    //input the range
    int range;
    printf("\nEnter the range: ");
    scanf("%d", &range);

    //prime calculation
    for(int i=0; i<range; i++){
        int count = 0; //reset the count
        for(int j=i; j>0; j--){
            //if i is commpletely divisible by j
            if(i%j == 0){
                count++;
            }
        }
        //if a number is divisible by only 2 numbers
        if(count == 2){
            printf("\n%d is a prime number!", i);
        }
    }
}