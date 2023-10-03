//WAP to print a half-left inverse pyramid using numbers
// 1
// 12
// 123
// 1234
// 12345

#include <stdio.h>

void main(){
    for(int i=1; i<=5; i++){ //row
        for(int j=1; j<=i; j++){ //column num
            printf("%d", j);
        }
        printf("\n");
    }
}