/*
Ques: What is a principal diagonal?
Ans: principal diagonal is the diagonal elements of the matrix.

principal diagonal: index number of row and column are same, and all the other elements are 0(zero)

program logic: if row_index_number and column_index_number are same, then print the element.
*/

//WAP to input elements in the matrix of size 3x3 and print them, and find the principal diagonal

#include <stdio.h>

int main(){

    //user-input for row and column size of matrix

    int arr[3][3]; // 2d array of 3x3

    // Element insertion 
    printf("\nEnter the Elements in the Matrix: \n");
    for(int row=0; row<3; row++){
        for(int col=0; col<3; col++){
            printf("arr[%d][%d]: ", row, col);
            scanf("%d", &arr[row][col]);
        }
    }

    // display the matrix(only principal diagonal elements)
    printf("\nYour matrix is: \n");
    for(int row=0; row<3; row++){
        
        printf("|"); //matrix border
        for(int col=0; col<3; col++){
            printf(" "); 
            //displa only diagonal elements
            if(row == col){
                printf("%d", arr[row][col]);
            }
            printf(" "); 
        }
        printf("|"); //matrix border
        printf("\n"); //new row
    }

    // display the matrix(principal diagonal elements with zero)
    printf("\nYour matrix is: \n");
    for(int row=0; row<3; row++){
        
        printf("|"); //matrix border
        for(int col=0; col<3; col++){
            printf(" "); 
            if(row != col){
                arr[row][col] = 0; //replace non-diagonal elements with 0
            }
            printf("%d", arr[row][col]);
            printf(" "); 
        }
        printf("|"); //matrix border
        printf("\n"); //new row
    }
}