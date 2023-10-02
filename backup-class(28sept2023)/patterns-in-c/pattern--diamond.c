//WAP to print a diamond using stars
//   *
//  ***  //space = line/2-1-i //space = space-1 //1
// ***** //star < line/2-space  //star = star+1  //
//  ***
//   *

#include <stdio.h>

void main(){
    int line = 5;
    int mid = line/2+1;
    int space = 0;
    int star = 0;

    for(int row=0; row<line; row++){
        if(row <= (line/2)){
                for(space=(line/2)-1-row; space>row; space--){ //2>0 1>0; 2>1 1>1;
                    printf("  ");
                }
                for(star=0; star<(space*2)-1; star++){ //0<2-0-1 0<1 1<1; 0<2+1-1 0<2 1<2 2<2; 0<2+2-1 0<3 1<3 2<3 3<3;
                    printf(" *");
                }
            }
        else if(row > (line/2) && row < line){
                for(int space=0; space<(row-(line/2)); space++){ //
                    printf("  ");
                }
                for(int star=(line/2); star<(line/2)-(row/2); star--){
                    printf(" *");
                }
        }
                printf("\n");
    }

}