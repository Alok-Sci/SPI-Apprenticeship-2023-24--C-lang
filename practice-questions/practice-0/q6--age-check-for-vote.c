//Program to enter the age and check if you are eligible for vote or not

#include <stdio.h>

void main(){
    //declare variable
    int age;

    //prompt user to enter age
    printf("Enter your age: ");
    scanf("%d", &age);

    //check if age is greater than or equal to 18
    if(age >= 18){
        printf("You are eligible for vote");
    }
    else{
        printf("You are not eligible for vote");
    }
}