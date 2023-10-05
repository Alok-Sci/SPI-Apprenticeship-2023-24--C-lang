# String

Collection of characters or Array of characters in C is called String.
There is no data type with name String in C.

## Null character
In C, there is a concept called null character in character array.

`\0` -> null character

`null character` terminates the character array.

`array size != array length` in char array


*Code:*

    char ch[] = "Str\0ing";
    printf("%s", ch);

*Output:*

    Str


>Note: it is mandatory to intialize a character array if its size is not declared. \
>Character array can be declared and initialized at the same time.

## String Input

`gets()` 
- this function is used to take string as an input 
- `gets()` also known as*get string function*
- used to take string as an input.
- similar to `scanf()` function.
  
*Code:*

    int str;
    gets(str);
    

`scanf()`
- this function too is used to take input, `%s` format identifier can be used to specify the string input.
  
*Code:*

    int str;
    scanf("%s", &str);
    
`%s` -> format identifier used to denote `string` \
`&str` -> `&` is the `address operatore` used to access the memory location of a variable.

## String Output

`puts()`
- puts() also known as put string
- used to display input

*Code:*

    int str1 = "Alok";
    puts(str1);
    puts("\nThis is a String");
    puts("\nThis is a Str\0ing");

*Output:*

    Alok
    This is a String
    This is a Str

`printf()` 
- function too can be used to display a string.
- following is the example to output a string using `pritnf()` 

*Code:*

    char ch[] = "String";
    printf("%s", ch);

*Output:*

    String

---
### Header File for String manipulation

`<string.h>`
- is header file specifically designed for string manipulation and string I/O operations.
- this header file contains predefined functions to work with strings

    #### Predefined functions of `<string.h>`

    `strlen(str);` 
    - used to calculate the length of a string. 
  
    `strcpy(str1, str2);` 
    - used to copy elements of `str2` --> `str1`
  
    `strcomp(str1, str2);` 
    - used to compare elements of `str2` --> `str1`

    `strcat(str1, str2);` 
    - used to concatenate two strings `str1` + `str2`
  
    `sizeof(str);` 
    - used to calculate the size of the array. 


---


# Pointer


## Declaration of a pointer 

`int *ptr_num = num;`

## Definition of a pointer 

## Initialization of a pointer 



