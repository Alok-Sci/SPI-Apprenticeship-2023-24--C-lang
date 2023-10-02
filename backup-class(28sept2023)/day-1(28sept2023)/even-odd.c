//WAP to find the even and odd numbers between 1 to 100.
// even condition : if number is divisible by 2, then it's an even number.
// odd condition : if number is not divisible by 2, then it's an odd number.

#include <stdio.h>

int main(){

    //initialize iterator
    int i = 0; 
    while( i <= 100){
        //display even number
        if(i % 2 == 0){
            printf("%d is even\n", i);
        }
        // display odd number 
        else{
            printf("%d is odd\n", i);
        }
        i++; //increment iterator
    }
    return 0;
}