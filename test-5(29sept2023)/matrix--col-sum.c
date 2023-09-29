//WAP to input a matrix, find the sum of row1, row2, and row3 of the matrix

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

    //calculate sum of each row
    int r_sum1 = 0, r_sum2 = 0, r_sum3 = 0;
    for(int i = 0; i < arr_size; i++){
        r_sum1 += arr[0][i];
        r_sum2 += arr[1][i];
        r_sum3 += arr[2][i];
    }

    //display sum of each row
    printf("Sum of row 1: %d\n", r_sum1);
    printf("Sum of row 2: %d\n", r_sum2);
    printf("Sum of row 3: %d\n", r_sum3);

    return 0;
}