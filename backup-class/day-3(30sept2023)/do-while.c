//wAP to display a menu, and input a choice

#include <stdio.h>

int main(){

    int reorder; //initialize the variable to check in condition later 
    do{
        //display a menu
        printf("\nWhat you wanna eat today?\n");
        printf("1. Aloo chat\n");
        printf("2. French fries\n");
        printf("3. Tomato soup\n");

        //choice input
        int choice;
        printf("Enter your choice: \n");
        scanf("%d", &choice);
        
        //choice evaluation
        switch(choice){
            case 1:
                printf("You clicked %d\n", choice);
                break;
            case 2: 
                printf("You clicked %d\n", choice);
                break;
            case 3:
                printf("You clicked %d\n", choice);
                break;
            default:
                printf("Invalid choice : %d\n", choice);
        }

        //loop rerun choice input
        printf("\nAnything else you want to eat? Press 1 for the menu.\n");
        scanf("%d", &reorder);

    } while(reorder == 1); //condition for loop rerun
}