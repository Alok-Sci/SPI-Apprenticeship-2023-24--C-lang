//WAP to print rhombus using stars
// ******
//  ******
//   ******
//    ******
//     ******

#include <stdio.h>

void main(){
    int line = 5; //static value for lines

    for(int i=0; i<line; i++){ // for row
        for(int j=0; j<i; j++){ //for column (space)
            printf(" ");
        }
        for(int j=0; j<line*2-1; j++){ //star = line*2-1
            printf("*");
        }
        printf("\n");
    }
}