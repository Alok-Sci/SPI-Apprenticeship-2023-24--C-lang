#include <stdio.h>

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++){ //loop for range iteration
        int count = 0; //reset the count
        for(int j = 1; j <= num; j++){  //loop for divisor iteration
            if(i % j == 0){ 
                count++; //increment the count
            }
        }
        //if the number is divisible by only 2 digits then it's prime number
        if(count == 2){
            printf("%d is a prime number.\n", i);
        }
    }

    return 0;
}