# Backup Class Notes:

In c, when a header file is included in a program and when it is executed

## Header file



## main() function 

`main(){}` - compiler only executes the program inside of `main()` function \
`int main(){}` - (`main()` return integer value) \
`void main(){}` - (`main()` doesn't return any value) 

`void` == no return type \
`int` == integer return type


-------------------------
### data types:

`int` -> integer data type; stores a number without decimal point (2byte/4byte)
`float` -> stores a number with decimal point 
`char` -> character data type; stores a single character.

-------------------------
### Variable declaration & definition

    int a;

`int` -> data type of variable \
`a` -> variable name \
`;` -> statement terminator 

*Example:*

    int a;
    int a, int b;
    int a, b;

-------------------------
### Variable initialization 

    int a = 10;

`int` -> data type \
`a` -> variable name \
`=` -> assignment operator (stores the value in the right to the variable in the left) \
`10` -> value to assign to a variable  \
`;` -> statement terminator 

---------------------------
### Display output in console 

    printf("string %d \n", param); 

`printf()`  -> a function predefined in "stdio" header file \
`"string"` -> a string to display \
`%d` -> format specifier; specifies the format in which the value of 'param' need to be printed. \
`\n` -> escape sequence; \n is used to redirect the cursor to the next line. \
`param` -> parameter that printf() function takes

>**Note:** `printf()` function can have multiple parameters
        arithmetic operations can also be performed inside `printf()` function. \
        Variables are written outside the quotes. 

--------------------------------
### Take input from user in console

    scanf("%d", &a);

`scanf()`  is a function, predefined in "stdio" header file

`""` contains format specifiers to take inputs.

`%d` is a format specifier, for taking input from user in console

`&a`, `&` is also called `address operator`, locates the memory location of the variable 'a' and stores the input value.

>**Note:** `""` mustn't contain any `whitespace`.

---
## Operators

### Arithmetic operators

used to perform arithmetic operations.

`+` -> operator to add two operands
`-` -> operator to subtract two operands
`*` -> operator to multiply two operands
`/` -> operator to divide two operands
`%` -> operator to find the remainder of division of two operands

---
### Comparison operators 

used to compare the values of two operands or expressions

`==` -> equal(returns true, if two operands are equal)

`!=` -> not equal(returns true, if the two operands are not equal)

`<=` -> less than or equal(returns true, if the left operand is less than or equal to the right operand)

`>=` -> greater than or equal(returns true, if the left operand is greater than or equal to the right operand)

`<>` -> less than or greater than(returns true, if the left operand is less than or greater than right operand)

---
### Logical operators

logical operator checks whether two conditions matches or not 

`&&` -> `and` -> returns true if both the conditions are true, if any one codition returns false.

`||` -> `or` -> retruns true if one of the two conitions is true, or both are true.

---
## Conditional statements / decision control

1.  if statement:
   
    *Syntax:*

        if(condition){
            //code
        }

2.  if-else statement
   
    *Syntax:*

        if(condition){
            //code
        }else{
            //code
        }

3. if-else if-else statement
   
    *Syntax:*

            if(condition){
                    //code
                }else if(condition){
                    //code
                }else{
                    //code
            }

4.  ladder if statement

    *Syntax:*

        if(condition){

        }if(condition){

        }
5.  nested if statement

    *Syntax:*

        if(condition){
            if(condition){
                if(condition){
                    //code
                }
            }
        }

6. switch-case statement

    *Syntax:*

        switch(condition){
            case choice_1:
                //code
                break;
            case choice_2:
                //code
                break;
            default:
                //code
        }
---
## Loops

---
## Function 
- Function is a set of instruction to perform a specific task
- Funtion is reusable

In c, to create a function, we first need to declare a function, then define it and then call it.
1. Declaration of function
    - In C, function is declared above the main() function; can also be declared inside
    - In C, A funciton can be declared and defined at the same time.
    - If a function is declared inside of main() function then is can not be called within the other functions

    *Example:*

    There can have no variable name in parameters when `declaring a function`.

        void(int, int);

    A function can be declared and defined at the same time.
    
        void(int a){
            printf("%d is a", a);
        }

2. Definition of function
    - In C, a function is defined


> ***Note:***
> - it is not necessary to pass parameter with the same name in declaration and definition statements.
> - 
    
### Four types of function in c:
***
1. Parameterized function 
    - In these functions, parameters are passed within the paranthesis `()`.

            void func(param1, param2);
    ---

2. Non-parameterized function
    - In non-parameterized functions, no parameters are passed to the function within the paranthesis `()`.

            void func();
    ---

3. Return type function
    - In these functions, functions return a value.
    - return type needs not to be `void` at the time of declaration or definition.
    - function with `void` return type does not return any value.

            int add(num1, num2){
                return num1+num2;
            }
    - Here the line `return num1+num2;` is a return statement, which defines what the function will return.
    ---
            
4. Non-return type function
    - These type of statements does not return anything.
    - These functions does not have a `return statement`.

            void func(param1, param2){
                //code
            }
    ---
