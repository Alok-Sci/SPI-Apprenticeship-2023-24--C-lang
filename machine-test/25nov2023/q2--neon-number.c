#include <stdio.h>

void main(){
    int num;
    printf("Enter a number to find whether or not its Neon: ");
    scanf("%d", &num);

    int sq = num * num;
    int sum = 0;
    while(sq != 0){
        int rem = sq % 10; //extracting the last digit
        sum += rem; //adding the last digit to the sum
        sq /= 10;  //removing the last digit
    }

    if(sum == num){
        printf("%d is a Neon Number", num);
    }
    else{
        printf("%d is not a Neon Number", num);
    }

}