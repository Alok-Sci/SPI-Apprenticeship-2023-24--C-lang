//WAP to find the largest and smallest element in the array

/*
Algorithm

1. input array size for array a and array b
2. define and initialize the size of all three arrays to max_size
3. insert element in the array a and array b
4.. display the original arrays
5. perform subtraction inside of loop inside loop, and store in the array_c
6. display the subtracted matrix

*/

#include <stdio.h>

int main(){
    int arr_size;

//array size input
    printf("\nEnter the size of the array A & B: ");
    scanf("%d", &arr_size);

//declare an array with given size
    int arr_a[arr_size][arr_size];
    int arr_b[arr_size][arr_size];
    int arr_c[arr_size][arr_size];

//insert the element in the array a
    printf("\nInsert the element in the array at:\n");
    for(int i=0; i<arr_size; i++){
        for(int j=0; j<arr_size; j++){
            printf("arr_a[%d][%d]", i, j);
            scanf("%d", &arr_a[i][j]); //store input in array
        }
    }

//insert the element in the array b
    printf("\nInsert the element in the array at:\n");
    for(int i=0; i<arr_size; i++){
        for(int j=0; j<arr_size; j++){
            printf("arr_b[%d][%d]", i, j);
            scanf("%d", &arr_b[i][j]); //store input in array
        }
    }
    
// display the matrix a 
    printf("\nMatrix A:\n");
    for(int i=0; i<arr_size; i++){
        printf("|");
        for(int j=0; j<arr_size; j++){
            printf(" %d ", arr_a[i][j]);
        }
        printf("|");
        printf("\n");
    }

// display the matrix b
    printf("\n Matrix B:\n");
    for(int i=0; i<arr_size; i++){
        printf("|");
        for(int j=0; j<arr_size; j++){
            printf(" %d ", arr_b[i][j]);
        }
        printf("|");
        printf("\n");
    }

//calculate the sum of matrix 
    printf("\n Matrix A - Matrix B:\n");
    for(int i=0; i<arr_size; i++){
        printf("|");
        for(int j=0; j<arr_size; j++){ 

            //store the sum of the element of array a and b to c
            arr_c[i][j] = arr_a[i][j] - arr_b[i][j];            
            //printing sum of elements of matrices
            printf(" %d ", arr_c[i][j]);
        }
        printf("|");
        printf("\n");
    }
    

    return 0;
}