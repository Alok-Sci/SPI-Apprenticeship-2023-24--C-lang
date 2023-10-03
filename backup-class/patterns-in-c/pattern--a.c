//WAP to print A 
//      $$
//     $$$$
//    $$  $$
//   $$$$$$$$
//  $$      $$
// $$        $$

#include <stdio.h>

int main(){
    for(int i=1; i<=6; i++){ //row
        //space before A
        for(int j=6; j>i; j--){
            printf(" ");
        }
        //left slope of A
        printf("$$");

        //print space between left and right slope of A
        for(int k=2; k<i; k++){
            if(i == 4){
                printf("$$"); //display middle line of A
            }
            else {
                printf("  ");
            }
        }
        //right slope of A
        if(i != 1){
            printf("$$");
        }
        printf("\n"); //new line
    }
}