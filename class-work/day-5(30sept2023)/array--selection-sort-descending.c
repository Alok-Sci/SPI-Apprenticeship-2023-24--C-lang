//WAP to perform selection sorting

// Algorithm
// 1. input array size 
// 2. create an array
// 3. insert elements in array
// 4. display the array
// 5. perform sorting
// 6. open for loop (i)
// 7. store a[i] for later use 
// 8. open for loop (j)
// 9. if a[i] is less than a[j], then swap 
// 10. display the sorted array 


#include <stdio.h>

void main(){
    // input the size of the array 
    printf("\nEnter array size: ");
    int arr_size;
    scanf("%d", &arr_size);

    // dlclare an array
    int arr[arr_size];

    //input elements in the array
    printf("\nInsert elements in the array:\n");
    for(int i=0; i<arr_size; i++){
        printf("arr[%d]", i);
        scanf("%d", &arr[i]);
    }

    //display the array
    printf("\nOrginial array:\n");
    printf("arr[");
    for(int i=0; i<arr_size; i++){
        printf("%d,", arr[i]);
    }
    printf("\b]");

    //perform sorting 
    for(int i=0; i<arr_size; i++){
        int s = arr[i];
        for(int j=i+1; j<arr_size; j++){
            if(s < arr[j]){
                s = arr[j];
                //perform swapping
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    //display the sorted array
    printf("\nSorted array:\n");
    printf("arr[");
    for(int i=0; i<arr_size; i++){
        printf("%d,", arr[i]);
    }
    printf("\b]");
}