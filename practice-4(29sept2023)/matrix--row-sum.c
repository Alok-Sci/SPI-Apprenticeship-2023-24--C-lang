//WAP to input a matrix, find the sum of row1, row2, and row3 of the matrix

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

    //display matrix
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
    for(int i = 0; i < arr_size; i++){
        int r_sum = 0; //reset the value of row sum
        for(int j = 0; j < arr_size; j++){
            r_sum += arr[i][j];
        }
        //display sum of each row
        printf("Sum of row %d: %d\n", i+1, r_sum);
    }

    return 0;
}