// 1. INCOME TAX
// i. Upto 100000 ----> 5% of Income
// ii. Next 50000 ----> 7% of Income
// iii. Next 70000 ----> 10% of Income
// iv. Above 220000 ----> 15% of Income
// WAP to input income of an employee, calculate and print the tax according to the above conditions.


#include <stdio.h>

void main(){
    // prompt for income input 
    int income, tax = 0;
    printf("Enter your income: ");
    scanf("%d", &income);

    // tax calculation 
    if(income <= 100000){
        tax = income * (0.05);
    }
    else if (income > 100000 && income <= 150000){
        tax = ((100000) * (0.05)) + ((income - 100000) * (0.07));
    }
    else if (income > 150000 && income <= 220000){
        tax = ((100000) * (0.05)) + ((50000) * (0.07)) + ((income - 150000) * (0.1));
    }
    else if (income > 220000 ){
        tax = ((100000) * (0.05)) + ((50000) * (0.07)) + ((70000) * (0.1)) + ((income - 220000) * (0.15));
    }

    // display the tax and income 
    printf("Your Income: %d\nYour Tax: %d", income, tax);
}