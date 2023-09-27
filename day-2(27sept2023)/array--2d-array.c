/*
Ques: What is a 2D array?
Ans: 2D array stands for 2 Dimensional array,
-where; the first square bracket denotes row index number 
-the second square bracket denotes column index number.

2d array demonstration: arr[row][col]
row -> col (column is dependent on row)
*/

//WAP to input elements in the matrix of size 3x3 and print them.

#include <stdio.h>

int main(){

    int arr[3][3]; // 2d array of 3x3

    // input the elements in the matrix
    printf("\nEnter the Elements in the Matrix: \n");

    for(int row=0; row<3; row++){
        for(int col=0; col<3; col++){
            printf("arr[%d][%d]: ", row, col);
            scanf("%d", &arr[row][col]);
        }
    }

    // display the matrix 
    printf("\nYour matrix is: \n");
    for(int row=0; row<3; row++){
        
        printf("|"); //matrix border
        for(int col=0; col<3; col++){
            printf(" "); 
            printf("%d", arr[row][col]);
            printf(" "); 
        }
        printf("|"); 
        printf("\n"); //new row
    }
}