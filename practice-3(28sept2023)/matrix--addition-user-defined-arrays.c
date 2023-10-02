//Program to create two user-defined arrays, and insert elements in them, and then calculating the sum of them in another matrix

/*
Algorithm

1. define a constant named max_size and initialize it with a value
2. define and initialize the size of all three arrays to max_size
3. input array size for array a and array b
4. insert element in the array a and array b
5. display the original arrays
6. compare the array_size, and assign the biggest to the array_c_size
7. start the for loop 
8. iterate the loop < array_c_size times
9. start another for loop 
10. iterate the loop < array_c_size times
11. if row && col < array_a_size, then assign current element, else assign 0 to the val_1
12. if row && col < array_b_size, then assign current element, else assign 0 to the val_2
13. add val_1 + val_2 and assign the value to current element of matrix_c
14. display the summed matrix

*/

#include <stdio.h>

#define MAX_SIZE 10 //constant definition and initialization

int main() {

//define arrays with 100 rows and cols
    int arr_a[MAX_SIZE][MAX_SIZE], arr_b[MAX_SIZE][MAX_SIZE], arr_c[MAX_SIZE][MAX_SIZE]; //very important

// Input array sizes
    int arr_a_size, arr_b_size;
    printf("Enter the size of array a: ");
    scanf("%d", &arr_a_size);

    printf("Enter the size of array b: ");
    scanf("%d", &arr_b_size);

// Input elements for array a
    printf("Insert elements for array a:\n");
    for (int i = 0; i < arr_a_size; i++) {
        for (int j = 0; j < arr_a_size; j++) {
            printf("arr_a[%d][%d]: ", i, j);
            scanf("%d", &arr_a[i][j]);
    }

// Input elements for array b
    printf("Insert elements for array b:\n");
    for (int i = 0; i < arr_b_size; i++) {
        for (int j = 0; j < arr_b_size; j++) {
            printf("arr_b[%d][%d]: ", i, j);
            scanf("%d", &arr_b[i][j]);
        }
    }
//using ternary operator to initialize the array size to the array c
//the bigger arr_size among the two array will be initialized to the arr_c_size
    int arr_c_size = (arr_a_size > arr_b_size) ? arr_a_size : arr_b_size; 

// Matrix addition
    for (int i = 0; i < arr_c_size; i++) {
        for (int j = 0; j < arr_c_size; j++) {

            //if the row and column is less than array_size, then store the value of current array element into the variable
            int val_a = (i < arr_a_size && j < arr_a_size) ? arr_a[i][j] : 0; 
            int val_b = (i < arr_b_size && j < arr_b_size) ? arr_b[i][j] : 0;
            arr_c[i][j] = val_a + val_b; //performing addition
        }
    }

// display the matrix a 
    printf("\nMatrix A:\n");
    for(int i=0; i<arr_a_size; i++){
        printf("|");
        for(int j=0; j<arr_a_size; j++){
            printf(" %d ", arr_a[i][j]);
        }
        printf("|");
        printf("\n");
    }

// display the matrix b
    printf("\n Matrix B:\n");
    for(int i=0; i<arr_b_size; i++){
        printf("|");
        for(int j=0; j<arr_b_size; j++){
            printf(" %d ", arr_b[i][j]);
        }
        printf("|");
        printf("\n");
    }

// Display the sum of matrix A & B
    printf("\nMatrix A - Matrix B:\n");
    for (int i = 0; i < arr_c_size; i++) {
        printf("|");
        for (int j = 0; j < arr_c_size; j++) {
            printf(" %d ", arr_c[i][j]);
        }
        printf("|");
        printf("\n");
    }

    return 0;
}
