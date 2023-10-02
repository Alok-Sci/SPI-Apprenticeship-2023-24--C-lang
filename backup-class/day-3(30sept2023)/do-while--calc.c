//wAP to display a menu, and input a choice

#include <stdio.h>

int main(){

        //display a menu
        printf("\nCalculator\n");
        printf("===========\n");
        
    int rerun; //initialize the variable to check in condition later 
    do{

        //operation choice
        char choice;
        printf("\n Select the operation to perform: ");
        scanf("%c",&choice);
        //do not put integer input statements above these statement


        //input numbers
        int num1, num2;
        printf("\nEnter first number: ");
        scanf("%d", &num1);

        printf("\nEnter second number: ");
        scanf("%d", &num2);


        switch(choice){
            case '+':
                printf("%d %c %d = %d", num1, choice, num2, num1+num2);
                break;
            case '-':
                printf("%d %c %d = %d", num1, choice, num2, num1-num2);
                break;
            case '*':
                printf("%d %c %d = %d", num1, choice, num2, num1*num2);
                break;
            case '/':
                printf("%d %c %d = %d", num1, choice, num2, num1/num2);
                break;
            default:
                printf("Invalid choice");
        }
        
        
        //loop rerun choice input
        printf("\nPress 1 to rerun\n");
        scanf("%d", &rerun);

    } while(rerun == 1); //condition for loop rerun
}