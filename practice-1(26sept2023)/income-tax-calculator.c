/*
newly_learnt: floating point division
    -5/100 is integer division and outputs no decimal value.
    -5.0/100 is floating point division and it outputs decimal or floating value.
*/

//WAP to input income of an employee calculate and print the tax according to the above conditions
// Income tax:
// i. Upto 10000 -> 5% of Income
// ii. Next 50000 -> 7% of Income
// iii. Next 70000 -> 10% of Income
// iv. Above 220000 -> 15% of Income

#include <stdio.h>

int main(){
    int income = 0;
    float tax = 0;

// user-input for income 
    printf("\nEnter you Income: ");
    scanf("%d", &income);

    // display the income of the employee
    printf("\nIncome of Employee: %d ", income);

    // i. Upto 10000 -> 5% of Income (500)
    if(income <= 10000){
        tax = (5.0/100.0); //0.05
    }

    // ii. Next 50000 -> 7% of Income  (500 + 2800)
    else if(income <= 50000){
        tax = (10000*(5.0/100.0)) + ((income-10000) * (7.0/100.0));
    }

    // iii. Next 70000 -> 10% of Income (500 + 2800 + 2000)
    else if(income <= 70000){
        tax = (10000*(5.0/100.0)) + (40000*(7.0/100.0)) + ((income-50000)*(10.0/100.0));
    }

    // iv. Above 220000 -> 15% of Income (500 + 2800 + 2000 + 22500)
    else if(income > 70000){
        tax = (10000*(5.0/100.0)) + (40000*(7.0/100.0)) + (30000*(10.0/100.0)) + ((income-70000)*(15.0/100.0));
    }

    // display the calculated tax on the income 
    printf("\nTax on income: %.2f", tax);

    return 0;
}
