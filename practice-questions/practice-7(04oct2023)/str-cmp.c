//WAP to compare two strings if both are equal, print the same string

#include <stdio.h>
#include <string.h> //standard library for strcmp() function

#define MAX_SIZE 100 //defining constant


void main(){
    //declare two character arrays with size = 100
    char str1[MAX_SIZE], str2[MAX_SIZE];
    
    //input first string
    printf("\nEnter the first string: ");
    scanf("%s", str1);

    //input second string
    printf("\nEnter the second string: ");
    scanf("%s", str2);

    //store the result of string comparison
    int str_res = strcmp(str1, str2);

    //display a message if the strings are equal or not
    if(str_res == 0){
        printf("\nBoth the strings are equal: %s", str1);
    }
    else{
        printf("\nBoth the strings are different!");
    }
}