// WAP to input 2 no.s from the user and also the choice(number), calculate and print according to the following conditions: 
// If choice = 1 ----> Addition (of 2 no.s)
// If choice = 2 ----> Subtraction (of 2 no.s)
// If choice = 3 ----> Multiplication(of 2 no.s)
// If choice = 4 ----> Division(of 2 no.s)
// If choice = 5 ----> Mod(of 2 no.s)

 #include <stdio.h>

//Function to perform addition
 void add(int num1, int num2){
    int res = num1 + num2;
    printf("The Addition of %d and %d is: %d", num1, num2, res);
    return;
 }

//Function to perform subtraction
 void sub(int num1, int num2){
    int res = num1 - num2;
    printf("The subtraction of %d and %d is: %d", num1, num2, res);
    return;
 }

//Function to perform multiplication
 void mul(int num1, int num2){
    int res = num1 * num2;
    printf("The multiplication of %d and %d is: %d", num1, num2, res);
    return;
 }

 //Function to perform division
 void div(int num1, int num2){
    int res = num1 / num2;
    printf("The division of %d and %d is: %d", num1, num2, res);
    return;
 }
 
 //Function to perform division
 void mod(int num1, int num2){
    int res = num1 % num2;
    printf("The remainder of %d and %d is: %d", num1, num2, res);
    return;
 }
 
 int main(){
    int num1, num2, choice;

    //choice menu
    printf("Choose the operation you want to perform: \n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Mod\n");

    // choice input 
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    // numbers input 
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // choice processing 
    switch(choice){
        case 1:
            add(num1, num2);
            break;
        case 2:
            sub(num1, num2);
            break;
        case 3:
            mul(num1, num2);
            break;
        case 4:
            div(num1, num2);
            break;
        case 5:
            mod(num1, num2);
            break;
        default:
            printf("Invalid choice\n");
    }
 }

