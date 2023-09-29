//WAP to input a matrix, find the sum of column1, column2, and column3 of the matrix

#include <stdio.h>

int main(){

    //input array size
    int arr_size;
    printf("Enter the size of the array: ");
    scanf("%d", &arr_size);

    //declare array
    int arr[arr_size][arr_size];

    //input array elements
    printf("Enter the elements of the array: \n");
    for(int i = 0; i < arr_size; i++){
        for(int j = 0; j < arr_size; j++){
            printf("arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    //print matrix
    printf("The matrix is: \n");
    for(int i = 0; i < arr_size; i++){
        printf("|");
        for(int j = 0; j < arr_size; j++){
            printf(" %d ", arr[i][j]);
        }
        printf("|");
        printf("\n");
    }

    //calculate sum of each Column
    for(int i = 0; i < arr_size; i++){
        int c_sum = 0; //reset the value of row sum
        for(int j = 0; j < arr_size; j++){
            c_sum += arr[i][j];
        }
    //display sum of each column
    printf("Sum of column %d: %d\n", i, c_sum);
    }
    return 0;
}