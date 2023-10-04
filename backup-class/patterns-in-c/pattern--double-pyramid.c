//WAP to print double pyramid structure
//     *        *
//    ***      ***
//   *****    *****
//  *******  *******
// ****************** 

#include <stdio.h>

int main(){
    int line = 5;
    for(int i=0; i<line; i++){
        for(int j=line-1; j>i; j--){ //4 loops at i=0
            printf(" ");
        }
        for(int j=0; j<(i*2); ++j){ //1 loop at i=0
            printf("*");
        }
        for(int j=line*2-i; j>i+1; j--){ //8 loops at i=0
            printf(" ");
        }
        for(int j=0; j<(i*2); ++j){ //1 loop at i=0
            printf("*");
        }
        printf("\n");
    }
}