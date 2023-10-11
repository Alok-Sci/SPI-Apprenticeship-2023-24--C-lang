# Backup Class Notes:


## Header file
- In c, header file is a library of predefined functions and attributes.
- To use the predefined funtions of a C library, we need to include it in the program first.

***Syntax:***
```c
#include <stdio.h>
int main(){
    //code
}
```
***Breakdown:***
- `#include` -> preprocessor directive.
- `<stdio.h>` -> standard input/output header file.

## main() function 

***Syntax:***
```c
#include <stdio.h>
int main(){
    //code
    return 0;
}
```
***Breakdown:***
- `#include <stdio.h>` -> includes standard library functions in the program.
- `int` -> is the return type of `main()` function.
- `main(){}` -> compiler only executes the program from `{` to `}` of `main()` function.

- `int main(){}` -> `main()` returns integer value.
- `void main(){}` -> `main()` doesn't return any value.

- `void` -> no return type.
- `int` -> integer return type.

-------------------------
## Data types:

***Syntax:**
```output
<data_type> <var_name>;
```

***Breakdown:***
- `<data_type>` -> is the type of data that the variable is going to store.
- `<var_name>` -> declaration of the name of the variable. 
- `;` -> statement terminator.

***Example:**
```c
int var1; //integer type variable declaration and definition
float var2, var3; //float type variables declaration and definition 
char var4=3; //character type variable declaration, definition, and initialization
```
### Type of data types:
1. Primitive Data Types
2. User Defined Data Types
3. Derived Types

### Categorization of data types:

| Primitive | User-defined | Derived |
| --- | --- | --- |
| Integer | Class | Function |
| Character | Structure | Array |
| Floating point | Union | Pointer |
| Double floating point | Enum | Reference |
| Void | Typedef |

-------------------------
## Variable
-- definition of variables
### Variable declaration & definition
```c
<data_type> <var_name>;
```

- `<data_type>` -> data type of variable.
- `<var_name>` -> variable name.
- `;` -> statement terminator.

***Example:***
```c
int a;
int b, float c;
char d, e;
```
-------------------------
### Variable initialization 
```c
int a = 10;
```
- `int` -> data type.
- `a` -> variable name.
- `=` -> assignment operator (stores the value in the right to the variable in the left).
- `10` -> value to assign to a variable.
- `;` -> statement terminator.

---------------------------
## Display output in console 
```c
printf("string %d \n", param); 
```
- `printf()`  -> a function predefined in "stdio" header file.
- `"string"` -> a string to display.
- `%d` -> `format specifier`; specifies the format in which the value of 'param' need to be printed.
- `\n` -> `escape sequence`; `\n` is used to redirect the cursor to the next line.
- `param` -> parameter that `printf()` function takes.

>**Note:**
>- `printf()` function can have multiple parameters
>- Arithmetic operations can also be performed inside `printf()` function.
>- Variables are written outside the quotes. 

--------------------------------
## Take input from user in console
```c
scanf("%d", &a);
```
- `scanf()` -> a function, predefined in "stdio" header file.
- `""` -> contains format specifiers to take inputs.
- `%d` -> a format specifier, for taking input from user in console.
- `&a` -> `&` is also called `address operator`, locates the memory location of the variable `a` and stores the input value.

>**Note:**
>- `""` must not contain any `whitespace` inside `scanf()`.

---
## Operators
-- definition of operators

### Types of operators:
1. Arithmetic operators
2. Assignment operators
3. Comparison operators
4. Ternary operator
5. Logical operators
6. Bitwise operators

#### 1. Arithmetic operators
`Arithmetic operators` are used to perform arithmetic operations.

- `+` -> operator to add two operands.
- `-` -> operator to subtract two operands.
- `*` -> operator to multiply two operands.
- `/` -> operator to divide two operands.
- `%` -> operator to find the remainder of division of two operands.

---
#### 3. Comparison operators 
`Comparison operators` are used to compare the values of two operands or expressions.

- `==` -> equal(returns true, if two operands are equal).
- `!=` -> not equal(returns true, if the two operands are not equal).
- `<=` -> less than or equal(returns true, if the left operand is less than or equal to the right operand).
- `>=` -> greater than or equal(returns true, if the left operand is greater than or equal to the right operand).
- `<>` -> less than or greater than(returns true, if the left operand is less than or greater than right operand).

---
#### 5. Logical operators
`Logical operator` checks whether two conditions matches or not.

- `&&` -> `logical and` -> returns `true` if both the conditions are `true`, if any one codition returns `false`.
- `||` -> `logical or` -> returns `true` if one of the two conitions is `true`, or both are `true`.
- `!` -> `logical not` -> returns `true` if the given condition is `false`, and returns false if the given condition is `true`.

---
## Conditional statements / Decision control

### 1. if statement:
`if` statement is used to execute a block of code inside if, based on the given condition within the `()` paranthesis.

***Syntax:***
```c
if(<condition>){
    //code
}
```
*OR*
```c
if(<codition>)
    //single statement
```
***Example:***
```c
if(5>4){
    printf("5 is greater");
    printf("4 is smaller");
}
```
*OR*
```c
if(5>4)
    printf("5 is greater");
```

***Output:***
```output
5 is greater
4 is smaller
```
*OR*
```output
5 is greater
```
 
### 2. if-else statement
   
***Syntax:***
```c
if(<condition>){
    //code
}
else{
    //code
}
```

### 3. if-else if-else statement
   
***Syntax:***
```c
if(<condition>){
    //code
}
else if(<condition>){
    //code
}
else{
    //code
}
```

### 4. ladder if statement

***Syntax:***
```c
if(<condition>){
    //code
}
if(<condition>){
    //code
}
```

### 5. nested if-else statement

***Syntax:***
```c
if(<condition>){
    if(<condition>){
        if(<condition>){
            //code
        }
        else if(<condition>){
            //code
        }
        else {
            //code
        }
    }
    else {
        //code
    }
}
```

### 6. switch-case statement

***Syntax:***
```c
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
```

---
## Loops
-- definition of loops

### Types of loops
---
## Function 
- a set of instruction to perform a specific task.
- a block of code.
- are reusable.
- eliminates repetetive task.
- saves time, memory and efforts.
  
>In C, to create a function, we first need to declare a function, then define it and then call it.

### 1. Funtion Declaration
- In C, function is declared above the main() function.
- In C, A funciton can be declared and defined at the same time.
- If a function is declared inside of main() function then is can not be called within the other functions

***Example:***
>There can have no variable name in parameters when `declaring a function`.
```c
void(int, int);
```

### 2. Function Definition
- In C, a function should be defined below the main function
- A function can only be defined , when it is already declared.
***Example:***
```c
#include <stdio.h>

int main(){
    //code
}

void(int a){
    printf("%d is a", a);
}
```
>A function can be declared and defined at the same time, but is not a good practice.
```c
#include<stdio.h>

void(int a){
    printf("%d is a", a);
}

void main(){
    //code
}
```

### 3. Function Calling
- In C, a function is called inside the `main()` function.
***Syntax:***
```c
function_name(param);
```
***Example:***
```c
sum(1,2);
```

> ***Note:***
> - it is not necessary to pass parameter with the same name in declaration and definition statements.
    
### Types of functions in c:
***
#### 1. Parameterized function 
- In these functions, parameters are passed within the paranthesis `()`.
```c
void func(param1, param2){
    //code
}
```
---

#### 2. Non-parameterized function
- In non-parameterized functions, no parameters are passed to the function within the paranthesis `()`.
```c
void func(){
    //code
}
```
---

#### 3. Return type function
- In these functions, functions return a value.
- return type needs not to be `void` at the time of declaration or definition.
- function with `void` return type does not return any value.
```c
int add(num1, num2){
    return num1+num2;
}
```
>- Here the line `return num1+num2;` is a return statement, which defines what the function will return.
    ---
            
#### 4. Non-return type function
    - These type of statements does not return anything.
    - These functions does not have a `return statement`.

            void func(param1, param2){
                //code
            }
    ---
