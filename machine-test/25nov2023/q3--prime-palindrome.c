// 3. WAP to input a number and chech whether it is a Prime Palindrome number or not.
// Prime Palindrome -- 11
// It is a Prime Number and Palindrome Number both.

#include <stdio.h>

void main()
{
    // prompt to input a number
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    // taking backup of input number for later use
    int original_num = num;

    int count = 0;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        printf("%d is a prime number\n", num);
    }
    else
    {
        printf("%d is not a prime number\n", num);
    }

    // find palindrome

    // count digit
    int reverse = 0;
    while (num > 0)
    {
        int rem = num % 10;
        reverse = reverse * 10 + rem;
        num = num / 10;
    }

    // for (int i = num; i > 0; i / 10)
    // {
    //     int rem = i % 10;
    //     reverse = reverse * 10 + rem;
    //     num = num / 10;
    // }
    if (reverse == original_num)
    {
        printf("%d is a Palindrome\n", original_num);
    }
    else
    {
        printf("%d is not a palindrome\n", original_num);
    }
}