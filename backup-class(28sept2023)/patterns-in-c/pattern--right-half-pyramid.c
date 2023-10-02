//WAP to print a right half pyramid using stars
// *
// **
// ***
// ****
// *****

#include <stdio.h>

void main(){
    int star = 10;
    for(int i=0; i<star; i++){ //for row
        for(int j=0; j<i; j++){ //for column
            printf("* ");
        }
        printf("\n");
    }
}