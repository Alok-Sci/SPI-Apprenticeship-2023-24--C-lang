// A Company provides motorbike on rent to its members only. 
// Create a class bike with the following data members:
// int bkno(bike number),
// int phno(phone number),
// int idno(Id number of member),
// int days(number of days the bike is taken on rent), and 
// int charge(to store the rental charges)

// Write a program to input the suitable values of above data members. 
// Calculate the rental charges for the bike taken on rent as per the given criteria:

// Number of days          Rate per day
// First 5 days            Rs. 500 per day
// Next 5 days             Rs. 400 per day
// Rest of the days        Rs. 200 per day

//print the output in the following format: 
//Bike No. | Phone No.   | Member ID No.  | No. of Days   |   Rent to be paid



#include <stdio.h>

void main(){
    int bkno, idno, days, charge;
    long int phno;

    //take input
    printf("\nEnter your Bike number: ");
    scanf("%5d", &bkno);
    
    printf("\nEnter your Phone number: ");
    scanf("%ld", &phno);

    printf("\nEnter your Member Id number: ");
    scanf("%5d", &idno);

    printf("\nEnter days for which the bike taken on rent: ");
    scanf("%3d", &days);

    //evaluate charge
    if(days<=5){
        charge = 500*days;
    }
    else if(days>5 && days<=10){
        charge = (500*5) + (400*(days-5));
    }
    else if(days>10){
        charge = (500*5) + (400*5) + (200*(days-10));
    }

    //display the output
    printf("\nBike Number | Phone Number | Member Id number | No. of days | Rent to be paid\n");
    printf("   %d   | +91%ld|      %d      |     %d     | %d \n", bkno, phno, idno, days, charge);

}