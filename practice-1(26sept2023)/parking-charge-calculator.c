

//Ques: WAP to input of hours a vehicle is parked, calculate and print the charge acording to the above conditions.
//Parking lot:
//i. First 4 hours -> Rs. 20
// ii. Next 4 hours -> Rs. 5 per hr 
// iii. Next 4 hours -> Rs. 10 per hr 
// iv. Above 12 hours -> Rs. 15 per hr 
 
#include <stdio.h>

int main(){
    int hours, charge;

// get the user-input for the number of hours vehicle is parked 
    printf("Enter the time(in hours) a vehicle is parked: ");
    scanf("%d", &hours);

//i. First 4 hours -> Rs. 20
    if(hours <= 4){
        charge = 20;
    }
// ii. Next 4 hours -> Rs. 5 per hr 
    else if(hours <= 8){
        charge = 20 + ((hours-4)*5);
    }
// iii. Next 4 hours -> Rs. 10 per hr 
    else if(hours <= 12){
        charge = 20 + (4*5) + ((hours-8)*10);
    }
// iv. Above 12 hours -> Rs. 15 per hr 
    else if(hours > 12){
        charge = 20 + (4*5) + (8*10) + ((hours-12)*15);
    }

// display the parking charge 
    printf("Your parking charge is %d", charge);

    return 0;
}