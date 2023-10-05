
# SPI Apprenticeship Program 2023-24 (c language)
This is a ReadMe file for SPI Apprenticeship Program 2023-24 (C language)

<!-- ## Theory -->
<!-- ### Introduction to C
### C tokens
#### Keywords
#### Identifiers
#### Operators
##### Types of Operators
###### 1. Coditional -->


## Programs
`Q1.` WAP to input two numbers and perform the following operation on them: +, -, /, *, %.
>Click [here](practice-questions/practice-0/q1--arithmetic-op.c) to see the answer!

`Q2.` WAP to input time in seconds and convert it into minutes and seconds.
>Click [here](practice-questions/practice-0/q2--sec-into-min-sec.c) to see the answer!

`Q3.` WAP to enter time in seconds and convert it into hours, minutes, and seconds.
>Click [here](practice-questions/practice-0/q3--sec-into-hr-min-sec.c) to see the answer!

`Q4.` WAP to enter days and display output in years, months, and days.
>Click [here](practice-questions/practice-0/q4--days-into-yr-mnth-days.c) to see the answer!

`Q5.` WAP to enter days and display output in years, months, weeks, and days.
>Click [here](practice-questions/practice-0/q5--days-into-yr-mth-day-wk.c) to see the answer!

`Q6.` WAP to input age and check if you are eligible for voting or not.
>Click [here](practice-questions/practice-0/q6--age-check-for-vote.c) to see the answer!

`Q7.` WAP to input a number and check if it's even or odd number; use if-else.
>Click [here](practice-questions/practice-0/q7--if-else--even-odd.c) to see the answer!

`Q8.` WAP to input two numbers and check if the number is greater or equal to the other number.
>Click [here](practice-questions/practice-0/q8--num-grt-or-eq.c) to see the answer!

`Q9.` WAP to input two numbers and check if a number is greater than the other number or not.
>Click [here](practice-questions/practice-0/q9--num-grt-or-not.c) to see the answer!

`Q10.` WAP to print week days like Sunday, Monday, etc; use if-else.
>Click [here](practice-questions/practice-0/q10--if-else--week-days.c) to see the answer!



## Miscellaneous
### 1. Empty `main()`
What will happen if we leave the `main()` function empty and run it? \

*Source Code:*

    main(){

    }

>Click [here](examples-c/empty-main.c) to check the output!


### 2. Getting garbage value instead of expected output :
 In the given code, this line will through a garbage value.

 *Source code:*

        #include <stdio.h>

        void main(){
            int num;
            printf("%d is a number");
            scanf("%d", &num);
        }

>Click [here](examples-c/ex2--grbg-val.c) to check the output

*ERROR:* \
Reason is that this statement is missing a parameter to display the variable value, to replace `%d`
   
    printf("%d is a number");

*FIX:*
    
    printf("d is a number", num);

### 2. Program terminates without taking the character input.

In the given code the program will take two integer input and then is expected to take character input, but something else happens when running this code.

*ERROR:* \
This is some kind of compiler error or C language bug in latest version of C.

    int num1, num2;
    printf("\nEnter first number: ");
    scanf("%d", &num1);

    printf("\nEnter second number: ");
    scanf("%d", &num2);

    //operation choice
    char choice;
    printf("\n Select the operation to perform: ");
    scanf("%c",&choice);

>Click [here](examples-c/ex3--ch-int-input.c) to check the output

*FIX:* \
Taking the character input before any integer input will fix this issue. Just change the position of statements used to take inputs.

    //operation choice
    char choice;
    printf("\n Select the operation to perform: ");
    scanf("%c",&choice);

    int num1, num2;
    printf("\nEnter first number: ");
    scanf("%d", &num1);

    printf("\nEnter second number: ");
    scanf("%d", &num2);


    








