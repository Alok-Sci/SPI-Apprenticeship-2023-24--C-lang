/*
Ques: What is an antidiagonal array?
Ans: antidiagonal array is a matrix which contains elements on the main diagonal but not on the secondary diagonal.

program logic: if sum of row_index_number and column_index_number is equal to the number_of_rows-1 then print the number.
*/

//WAP to input elements in the matrix of size nxn and print them.

/*

--Algorithm--
1. input array_size
2. create an array with the given array_size
3. loop over the array and input the elements
4. display the matrix
5. 
*/

#include <stdio.h>

int main(){

    int num; //array_size 

//input for row and column
    printf("Enter the value for row & column: ");
    scanf("%d", &num);


    int arr[num][num]; // 2d array of nxn

    printf("\nEnter the Elements in the Matrix: \n");

    for(int row=0; row<num; row++){
        for(int col=0; col<num; col++){
            printf("arr[%d][%d]: ", row, col);
            scanf("%d", &arr[row][col]);
        }
    }

//display the original matrix
    printf("This is the original matrix: \n");
    for(int row=0; row<num; row++){
        printf("|"); //matrix border
        for(int col=0; col<num; col++){
            printf(" ");
            //print the number
            printf("%d", arr[row][col]);
        }
        printf(" ");
        printf("|");
        printf("\n");
    }

// display the counter diagonal matrix 
    printf("\nYour matrix is: \n");

    for(int row=0; row<num; row++){
        printf("|"); //matrix border
        for(int col=0; col<num; col++){
            printf(" "); 
            // sum of row and column 
            if ((row + col) == num-1){
                //print the number
                printf("%d", arr[row][col]);
            }
            printf(" "); 
        }
        printf("|"); 
        printf("\n"); //new row
    }
}
