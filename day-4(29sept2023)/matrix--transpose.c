// WAP to find the transpose matrix of a matrix

/*
Algorithm

1. take input for array row size, and array column size
2. create 2 2d array; matrix[row][col], transpose[col][row]
3. display the original matrix
4. start for loop with row
5. start for loop with col
6. transpose[col][row] = matrix[row][col];

*/

#include <stdio.h>

int main(){
    int row, col;

    // input row size of matrix 
    printf("Enter the row size of matrix: ");
    scanf("%d", &row);

    // input column size of matrix 
    printf("Enter the column size of matrix: ");
    scanf("%d", &col);

    //create matrix of row X col
    int matrix[row][col];
    int transpose[col][row];

    // insert elements 
    printf("Insert the elements in the matrix: \n");
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            printf("matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    //display original matrix
    printf("Original matrix: \n");
    for(int i = 0; i < row; i++){
        printf("|");
        for(int j = 0; j < col; j++){
            printf(" %d ", matrix[i][j]);
        }
        printf("|");
        printf("\n");
    }

    //transpose the matrix
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            transpose[j][i] = matrix[i][j];
        }
    }

    //display transpose matrix
    printf("Transposed matrix: \n");
    for(int i = 0; i < col; i++){ //changed row with col
        printf("|");
        for(int j = 0; j < row; j++){ //changed col with row
            printf(" %d ", transpose[i][j]);
        }
        printf("|");
        printf("\n");
    }
    
}