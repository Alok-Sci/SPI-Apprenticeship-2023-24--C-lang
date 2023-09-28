//WAP to input the size of the matrix and print the left and right diagonal matrix


#include <stdio.h>

int main(){
    int arr_size;

// input the row and column count for matrix 
    printf("\nEnter the matrix size: ");
    scanf("%d", &arr_size);

    arr_size--;

//create a 2d array with given rows and columns
    int arr[arr_size][arr_size];
    
//insert elements in the array
    printf("\nEnter the element at: \n");

    for(int i=0; i<=arr_size; i++){
        for(int j=0; j<=arr_size; j++){
            printf("arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

// print the original matrix 
    printf("\nOriginal matrix:\n");
    for(int i=0; i<=arr_size; i++){
        printf("|");
        for(int j=0; j<=arr_size; j++){
            printf(" %d ", arr[i][j]);
        }
        printf("|");
        printf("\n");
    }

// display boundary elements from the matrix
    printf("\nBoundary elements of the matrix:\n");
    for(int i=0; i<=arr_size; i++){
        printf("|");
        for(int j=0; j<=arr_size; j++){
            printf(" "); //space before element
            // for boundary elements 
            if(i == 0 || j == 0 || i == arr_size || j == arr_size){
                printf("%d", arr[i][j]);
            }
            else{
                printf(" ");
            }
            printf(" "); //space after element
        }
        printf("|");
        printf("\n");
    }

    return 0;
}

