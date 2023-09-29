//WAP to input a matrix, find the sum of column1, column2, and column3 of the matrix

#include <stdio.h>

int main(){

    //input array size
    int arr_size = 3;
    // printf("Enter the size of the array: ");
    // scanf("%d", &arr_size);

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
    int c_sum1 = 0, c_sum2 = 0, c_sum3 = 0;
    for(int i = 0; i < arr_size; i++){
        c_sum1 += arr[i][0];
        c_sum2 += arr[i][1];
        c_sum3 += arr[i][2];
    }

    //display sum of each column
    printf("Sum of column 1: %d\n", c_sum1);
    printf("Sum of column 2: %d\n", c_sum2);
    printf("Sum of column 3: %d\n", c_sum3);

    return 0;
}