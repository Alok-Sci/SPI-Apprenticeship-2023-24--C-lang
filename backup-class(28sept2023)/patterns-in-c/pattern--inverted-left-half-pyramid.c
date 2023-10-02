//WAP to print an inverted left half pyramid
// *****
// ****
// ***
// **
// *

#include <stdio.h>

void main(){
    int line = 10;

    for(int i=0; i<=line; i++){ //loop for row
        for(int j=0; j<i; j++){
            printf("  ");
        }
        for(int j=line; j>i; j--){ //loop for column
            printf("* ");
        }
        printf("\n"); //newline
    }
}