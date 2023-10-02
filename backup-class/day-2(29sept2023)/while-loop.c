//WAP to print numbers from 10 to 1

#include <stdio.h>

int main(){

    //initialize iterator
    int i = 10; 

    // condition check for loop 
    while( i >= 0){
        printf("%d\n", i); //display value of iterator
        i--; //decrement iterator
    }
    return 0;
}