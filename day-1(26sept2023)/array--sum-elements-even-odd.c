//Ques: WAP to input elements in an array of size 'n' and print the sum of all the even values and all the odd values.

#include <stdio.h>

int main(){

// array size input 
    int arr_size; //variable to store user input for array size
    printf("\nEnter the size of array: ");
    scanf("%d", &arr_size); //storing the user input to the variable "arr_size"

// declare an array with user-defined size
    int arr[arr_size];

// user-input for array elements
    printf("\nEnter the value to store in the array:\n ");
    for(int i=0; i<=arr_size-1; i++){
        scanf("%d", &arr[i]);
    }

// calculating sum of even and sum of odd values of array
    int sum_even = 0;
    int sum_odd = 0;

    for(int i=0; i<arr_size; i++){
        //calculating the sum of even values inside the array
        if(arr[i]%2 == 0){
            sum_even += arr[i]; //compound assignment with augmented addition
        }
        //calculating the sum of odd values inside the array
        if(arr[i]%2 != 0){
            sum_odd += arr[i];
        }
    }

    // display the sum of all the even array elements
    printf("\nSum of all the even array elements is %d", sum_even);

    // display the sum of all the odd array elements 
    printf("\nSum of all the odd array elements is %d", sum_odd);

}