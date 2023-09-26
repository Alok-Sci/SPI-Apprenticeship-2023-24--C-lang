//Ques: WAP to find the largest element and the smallest element in the array 

#include <stdio.h>

int main(){
    int arr_size;

    printf("Enter the size of the array: ");
    scanf("%d", &arr_size); //user-defined size of array


    int arr[arr_size]; //declaring an array with user-defined size
    printf("Enter the elements in the array: \n");
    // storing values in the array 
    for(int i=0; i<=arr_size-1; i++){
        scanf("%d", &arr[i]);
    }

    int largest_num = arr[0];
    int smallest_num = arr[0];
    for(int i=0; i<=arr_size-1; i++){

        // Find the largest number inside the array 
        if(arr[i] < smallest_num){
            smallest_num = arr[i];
        }

        // Find the smallest number inside the array
        if(arr[i] > largest_num){
            largest_num = arr[i];
        }
    }

    // display the smallest and largest elements inside the array
    printf("\nThe largest elements inside the array is %d", largestNum);
    printf("\nThe smallest elements inside the array is %d", smallestNum);


}   