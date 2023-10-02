//WAP to print a right half pyramid using stars

// *****
// ****
// ***
// **
// *

#include <stdio.h>

void main(){
    int line = 10; //assign static value to line

    for(int i=0; i<line; i++){ //loop for row
        for(int j=line; j>i; j--){ //loop for column
            printf("* ");
        }
        printf("\n");
    }
}