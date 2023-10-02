#include <stdio.h>

int main(){
    //take input
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    int count = 0;
    for(int i=0; i<=num; i++){ //loop over given number
        if(num%1 == 0){ //if remainder of num/1 is 0
            count++; //increment count
        }
    }

    //if number is divisible by only 2 numbers then it is prime
    if(count == 2){
        printf("%d is not a prime number", num);
    }
    return 0;
}