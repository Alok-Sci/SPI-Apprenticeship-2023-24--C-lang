/*
 Introduction to Arrays in C language: 
 -Array is a collection of memory of similar data type.
 -Array is a Variable.
 -Array can store or hold multiple values at the same time of similar data type.
 -Array is defined this way varibale_name[index_number].
 -Array is first defined; Arrays' size is defined.
 -Index number of an array start from 0.
*/

//Ques: WAP to input elements in an array of size 10 and print them as well.

#include <stdio.h>

int main(){
    // array size user-defined 
    int arr_size; //variable to store user input for array size

    // get an input from user 
    printf("Enter the size of the array: ");
    scanf("%d", &arr_size); //storing user input in variable "arr_size"

    int arr[arr_size]; //creating an array with user defined size

    // printf("Enter the elements in the array: ");
    // int temp_val;
    // for(int i=0; i<arr_size; i++){
    //     scanf("%d", &temp_val);
    //     arr[i] = temp_val;
    // }

//Getting user input for array elements
    printf("Enter the elements in the array: \n");
    int arr_sum = 0; //variable to store the sum of all the elements of the array
    
    //loop for storing values in the array
    for(int i=0; i<=arr_size-1; i++){
        scanf("%d", &arr[i]);

        // calculating sum of array elements 
        arr_sum += arr[i]; 
    }

// Display the entered array elements 
    printf("Entered array elements are: \n");

    //loop to display the values of the array
    for(int i=0; i<=arr_size-1; i++){
        printf("%d", arr[i]);
        printf("\n");
    }

// Display the sum of array elements 
    printf("Sum of all the elements of the array is %d", arr_sum);
    return 0;
}