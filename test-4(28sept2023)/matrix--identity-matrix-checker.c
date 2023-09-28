//WAP to find to input a matrix and check whether it's an identity matrix

/*
Algorithm:

1. input the matrix size
2. create a 2d array with given size
3. insert the elements in the matrix
4. display the original matrix
5. start for loop
6. if ((i==j) == 1 && (i!=j) == 0), then is identity matrix
7. display the output


*/

#include <stdio.h>

int main(){

//input matrix size
    int arr_size;
    printf("\nEnter the matrix size:\n");
    scanf("%d", &arr_size);

//create the array
    int arr[arr_size][arr_size];

//insert elements
    printf("\nEnter the elements in the matrix at:\n");
    for(int i=0; i < arr_size; i++){
        for(int j=0; j < arr_size; j++){
            printf("arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

//display original matrix
    printf("\n Original Matrix:\n");
    for(int i=0; i < arr_size; i++){
        printf("|");
        for(int j=0; j < arr_size; j++){
            printf(" %d ", arr[i][j]);
        }
        printf("|");
        printf("\n");
    }

    int is_identity = 1; //to store boolean (true/false) value
    for(int i=0; i < arr_size; i++){
        for(int j=0; j < arr_size; j++){
            if(i == j && arr[i][j] != 1){
                is_identity = 0;
                break; //terminate the loop
            }
            else if(i != j && arr[i][j] != 0){
                is_identity = 0;
                break; //terminate the loop
            }
        }
        if(is_identity == 0){
            break; //terminate the loop
        }
    }

    if(is_identity == 1){
        printf("\nThis is an Identity matrix");
    }
    else{
        printf("\nThis is not an Identity matrix");
    }

    return 0;

}