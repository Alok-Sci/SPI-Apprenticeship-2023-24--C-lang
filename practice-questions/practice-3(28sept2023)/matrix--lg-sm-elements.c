//WAP to find the largest and smallest element in the array

/*
Algorithm

1. input array size
2. insert element in the array
3. display the original array
4. declare and initialize the largest, and smallest variable with 0
5. loop for row over the array elements
6. loop for col over the array elements
7. if smallest > current element in loop, then smallest = current element.
8. if largest < current element in loop, then largest = current element.
9. display the largest and smallest element in the array.

*/

#include <stdio.h>

int main(){
    int arr_size;

    //array size input
    printf("\nEnter the size of the array: ");
    scanf("%d", &arr_size);

    //declare an array with given row and column
    int arr[arr_size][arr_size];


    //declare and initialize the variables for largest and smallest array elements 
    int largest, smallest;

    //insert the element in the array
    printf("\nInsert the element in the array at:\n");
    for(int i=0; i<arr_size; i++){
        for(int j=0; j<arr_size; j++){

            printf("arr[%d][%d]", i, j);
            scanf("%d", &arr[i][j]); //store input in array

            //storing the smallest value
            if(i==0 && j==0 || arr[i][j] < smallest){
                smallest = arr[i][j]; 
            }
            //storing the largest value
            if(i==0 && j==0 || arr[i][j] > largest){
                largest = arr[i][j];
            }
        }
    }

    //print the array(matrix)
    printf("\nOriginal matrix:\n");
    for(int i=0; i<arr_size; i++){
        printf("|");
        for(int j=0; j<arr_size; j++){
            printf(" %d ", arr[i][j]);
        }
        printf("|");
        printf("\n");
    }

    //print the largest and smallest array element
    printf("\nSmallest Array Element: %d\n", smallest);
    printf("\nLargest Array Element: %d\n", largest);

    return 0;
}