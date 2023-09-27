/*
--Sorting in Array--
Ques: What is sorting?
Ans: Sorting means arranging the array elements either in ascending or in descending order.

Ques: What is Bubble sort?
Ans: Bubble sort is a sorting technique in which the elements are swapped from their position.
*/

//WAP to sort the array in ascending order(using bubble sorting).

#include <stdio.h>

int main(){
    int arr_size;
    // array size 
    printf("\nEnter the size of the array: ");
    scanf("%d", &arr_size);

    // array declaration 
    int arr[arr_size];

    // element insertion 
    printf("\nInsert the elements in the array: ");
    for(int i=0; i<arr_size; i++){
        scanf("%d", &arr[i]);
    }

    // display the original array 
    printf("\n\nOriginal array: ");
    for(int i=0; i<arr_size; i++){
        printf("\n%d", arr[i]);
    }

    // sorting the array using bubble sort 
    for(int i=0; i<=arr_size; i++){
        for(int j=0; j<((arr_size-1)-i); j++){
            if(arr[j] > arr[j+1]){
                //swapping the bigger element to the right
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    // display the sorted array 
    printf("\n\nSorted array:");
    for(int i=0; i<arr_size; i++){
        printf("\n%d", arr[i]);
    }

}
