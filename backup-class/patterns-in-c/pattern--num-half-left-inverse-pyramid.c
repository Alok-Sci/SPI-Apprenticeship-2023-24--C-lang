//WAP to print a half-left inverse pyramid using numbers
// 12345
//  2345
//   345
//    45
//     5

#include <stdio.h>

void main(){
    for(int i=1; i<=5; i++){ //row
        for(int j=1; j<i; j++){ //column space
            printf(" ");
        }
        for(int j=i; j<=5; j++){ //column star
            // for(int k=; k<j)
            printf("%d", j);
        }
        printf("\n");
    }
}