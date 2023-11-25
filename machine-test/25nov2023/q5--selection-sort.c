// 5. WAP to input elements in an array of size ‘n’ and sort them in descending order using selection sort technique.

#include <stdio.h>

void main()
{

    // prompt for array name input
    // char arr_name;
    // printf("\nEnter the name for the array: ");
    // scanf("%s", &arr_name);

    // prompt for array size input
    int arr_size;
    printf("\nEnter the size for the array: ");
    scanf("%d", &arr_size);

    // create an array of size 'arr_size'
    int arr[arr_size];

    printf("\nInsert elements into the array: \n");
    for (int i = 0; i < arr_size; i++)
    {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    // original array
    printf("\nOriginal array: ");
    printf("\n[ ");
    for (int i = 0; i < arr_size; i++)
    {
        printf("%d", arr[i]);
        printf(", ");
    }
    printf("\b\b ]\n"); //removing the last comma from the array 

    // selection sort
    int temp;
    for (int first_el = 0; first_el < arr_size; first_el++)
    {
        for (int second_el = first_el + 1; second_el < arr_size; second_el++)
        {
            // if (arr[first_el] > arr[second_el]) // for ascending order 
            if (arr[first_el] < arr[second_el])// for descending order 
            {
                temp = arr[first_el];
                arr[first_el] = arr[second_el];
                arr[second_el] = temp;
            }
        }
    }

    //display sorted array
    printf("\nSorted array: ");
    printf("\n[ ");
    for (int i = 0; i < arr_size; i++)
    {
        printf("%d", arr[i]);
        printf(", ");
    }
    printf("\b\b ]\n"); //removing the last comma from the array 
}