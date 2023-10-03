
# SPI Apprenticeship Program 2023-24 (c language)
This is a ReadMe file for SPI Apprenticeship Program 2023-24 (C language)

## Day 1 (26 sept 2023)
This was my first class at SPI for Apprenticeship program 2023-23
I was a bit late, i have missed some classes of C basics.
Today, it took me 1 hr to write 2 simple c programs.

## Day 2 (27 sept 2023)

## Day 3 (28 sept 2023)
## Day 4 (29 sept 2023)
## Day 5 (30 sept 2023)

### Programs
***

[pyramid]: /backup-class/patterns-in-c/pattern--full-pyramid.c "pattern-pyramid"  




### Remember
***

#### 1. Getting garbage value instead of expected output :
 In the given code, this line will through a garbage value.

        #include <stdio.h>

        void main(){
            int num;
            printf("%d is a number");
            scanf("%d", &num);
        }
***INPUT :***

    -> 5
  
***OUTPUT :***

    6422168 is a number

***ERROR :***

>Reason is that this statement is missing a parameter to display the variable value, to replace `%d`
   
    printf("%d is a number");

***FIX:***
    
    printf("d is a number", num);

#### 2. Program terminates without taking the character input.

In the given code the program will take two integer input and then is expected to take character input, but something else happens when running this code.

    int num1, num2;
    printf("\nEnter first number: ");
    scanf("%d", &num1);

    printf("\nEnter second number: ");
    scanf("%d", &num2);

    //operation choice
    char choice;
    printf("\n Select the operation to perform: ");
    scanf("%c",&choice);

***ERROR:*** 

>This is some kind of compiler error or C language bug in latest version of C.

***FIX***

>Taking the character input before any integer input will fix this issue. Just change the position of statements used to take inputs.

    //operation choice
    char choice;
    printf("\n Select the operation to perform: ");
    scanf("%c",&choice);

    int num1, num2;
    printf("\nEnter first number: ");
    scanf("%d", &num1);

    printf("\nEnter second number: ");
    scanf("%d", &num2);


    








