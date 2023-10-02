//WAP to print inverted full pyramid using stars
// *********
//  *******
//   *****
//    ***
//     *

#include <stdio.h>

void main(){
    int line = 10; //static value for lines

    for(int i=0; i<line; i++){ //for row
        for(int j=0; j<i; j++){ //for column (space)
            printf("  ");
        }
        for(int j=(line*2-1); j>i*2; j--){ //for column (star)
            printf(" *");
        }
        printf("\n");
    }
}
     