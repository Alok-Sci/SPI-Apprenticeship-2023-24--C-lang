//WAP to print a left half pyramid using stars
//     *
//    **
//   ***
//  ****
// *****

#include <stdio.h>

int main(){
    int line = 10;

    for(int i=0; i<line; i++){ //for row 
        for(int j=line; j>=i; --j){ //for column (space)
            printf("  ");
        }
        for(int j=0; j<=i; j++){ //for column (star)
            printf("* ");
        }
        printf("\n");
    }
}