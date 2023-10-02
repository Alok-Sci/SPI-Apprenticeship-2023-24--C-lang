//WAP to multiply two matrices and store the product in another matrix

/*
Algorithm

- input the matrix size
- create three arrays [arr_a, arr_b, arr_c]
- insert elements in the arr_a, and arr_b
- display the elements of arr_a, and arr_b
-  


*/

 #include <stdio.h>

 int main(){
    int arr_size;
    printf("\nEnter the size of the matrix: ");
    scanf("%d", &arr_size);

    int arr_a[arr_size][arr_size];
    int arr_b[arr_size][arr_size];
    int arr_c[arr_size][arr_size];

//Input elements for the first matrix
    printf("\nEnter the elements of the first matrix: ");
    for(int i=0; i<arr_size; i++){
        for(int j=0; j<arr_size; j++){
            printf("arr_a[%d][%d]: ", i, j);
            scanf("%d", &arr_a[i][j]);
        }
    }
//Input elements for the first matrix
    printf("\nEnter the elements of the second matrix: ");
    for(int i=0; i<arr_size; i++){
        for(int j=0; j<arr_size; j++){
            printf("arr_b[%d][%d]: ", i, j);
            scanf("%d", &arr_b[i][j]);
        }
    }

//Display the first matrix
    printf("\nThe first matrix is: \n");
    for(int i=0; i<arr_size; i++){
        printf("|");
        for(int j=0; j<arr_size; j++){
            printf(" %d ", arr_a[i][j]);
        }
        printf("|");
        printf("\n");
    }

//Diplay the second matrix
    printf("\nThe second matrix is: \n");
    for(int i=0; i<arr_size; i++){
        printf("|");
        for(int j=0; j<arr_size; j++){
            printf(" %d ", arr_b[i][j]);
        }
        printf("|");
        printf("\n");
    }

//calculate the product of the two matrices
    printf("\n Matrix A * Matrix B is: \n");
    for(int i=0; i<arr_size; i++){
        printf("|");
        for(int k=0; k<arr_size; k++){
            int sum = 0;
            for(int j=0; j<arr_size; j++){
                sum += arr_a[i][j] * arr_b[j][k];
            }
            arr_c[i][k] = sum;
            printf(" %d ", arr_c[i][k]);
        }
        printf("|");
        printf("\n");
    }
    return 0;
}