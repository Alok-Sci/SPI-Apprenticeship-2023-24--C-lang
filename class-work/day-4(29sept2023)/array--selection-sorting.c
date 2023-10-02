//WAP to create an array, insert elements in the array, and perform selection sort to sort the array in descending order

/*
Algorithm

1. input array size
2. create an array
3. insert elements 
4. display original array
 //perform selection sorting
5. start for loop
6. store the value of a[i] (first index element)
7. start for loop 
8. if the first index element of the array is less than the compared index element, then swap the values
9.  
*/

#include <stdio.h>

int main(){
    int arr_size;
    printf("Enter the array size: \n");
    scanf("%d", &arr_size);


    //create an array with given size
    int arr[arr_size];

    //insert element 
    printf("Insert Element: \n");
    for(int i=0; i < arr_size; i++){
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    // display the array
    printf("Original array: \n");
    for(int i=0; i < arr_size; i++){
        printf("arr[%d]: %d\n", i, arr[i]);
    }

    //perform sorting for ascending order
    for(int i=0; i < arr_size; i++){
        //store the first index element
        int cmp_el = arr[i];
        for(int j = (i+1); j < arr_size; j++){
            if( cmp_el > arr[j]){
                cmp_el = arr[j];
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    // display sorted ascending array 
    printf("\nSorted array in Ascending order: \n");
    for(int i=0; i < arr_size; i++){
        printf("| %d ", arr[i]);
    }
    printf("|");

    //perform sorting for descending order
    for(int i=0; i < arr_size; i++){
        //store the first index element
        int cmp_el = arr[i];
        for(int j = (i+1); j < arr_size; j++){
            if( cmp_el < arr[j]){
                cmp_el = arr[j];
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    // display sorted descending array 
    printf("\nSorted array in Descending order: \n");
    for(int i=0; i < arr_size; i++){
        printf("| %d ", arr[i]);
    }
    printf("|");

    return 0;
}