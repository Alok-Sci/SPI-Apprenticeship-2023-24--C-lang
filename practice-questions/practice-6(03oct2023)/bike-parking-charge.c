// A Scooter/motor cycle stand charges the following rates for the parking:
// Hours                             |  Rate per hour
// ----------------------------------------------------------
// First 4 Hours                     |  Rs. 5.00
// Every next hour upto 5 hours      |  Rs. 3.00 per hour
// Any further hour above 9 hours    |  Rs. 2.00 per hour

// Write a program to input the number of hours for which a two wheeler is parked. 
//Calculate and print the parking charges to be paid by the customer.

#include <stdio.h>

int main(){

    //input hours
    int hour, charge = 0;
    printf("\nEnter hour(s) for which scooter/motor cycle parked: ");
    scanf("%d", &hour);

    //condition check
    if(hour<=4){
        charge = 5;
    }
    else if(hour>4 && hour<=9){
        charge = 5 + (3*(hour-4));
    }
    else if(hour>9){
        charge = 5 + (3*5) + (2*(hour-9));
    }

    //display charges
    printf("\nParking hours: %d Hrs.\nParking charges: %d Rs.", hour, charge);
}