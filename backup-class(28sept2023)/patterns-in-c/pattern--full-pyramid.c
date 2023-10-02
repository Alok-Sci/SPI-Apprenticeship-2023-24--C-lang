//WAP to print a full pyramid using stars
//     *  
//    ***
//   *****
//  *******
// *********

#include <stdio.h>

void main(){
    int line = 10; //static value for lines

    for(int i=0; i<line; i++){ //for row
        for(int j=line; j>i; j--){ //for column (space)
            printf("  ");
        }
        for(int j=0; j<=(i*2); ++j){ //i*2 stars per row
            printf(" *");
        }
        printf("\n");
    }
}