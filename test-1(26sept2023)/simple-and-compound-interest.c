/*
newly_learnt: %.2f is the precision for decimal value
    %f: is escape sequence for float;
    .2: displays two decimal values after decimal point
*/

//Ques: WAP to calculate Simple Interest and Compound Interest


#include <stdio.h>
#include <math.h>

// Function to calculate the simple interest [SI = p*r*t]
void SI(int principal, float rate_percent, int time){
    const float SI = principal * rate_percent * time;
    printf("\nSimple interest of %d Rs. at the rate of %.1f%% for %d years is %.2f", principal, rate_percent * 100, time, SI); 
}

// Function to calculate the compound interest [CI = p*(r+1)*t]
void CI(int principal, float rate_percent, int time){
    const float CI = principal * (pow((1 + rate_percent), time) - 1);
    printf("\nCompound interest of %d Rs. at the rate of %.1f%% for %d years is %.2f", principal, rate_percent * 100, time, CI);
}

int main(){

    int principal, time;
    float rate_percent;

// Taking user-inputs 
    printf("\nEnter the Capital(money) borrowed: ");
    scanf("%d", &principal);

    printf("\nEnter the Rate of Interest: ");
    scanf("%f", &rate_percent);
    rate_percent /= 100; //convert rate to decimal form
    
    printf("\nEnter the Time(in years) for which the money is borrowed : ");
    scanf("%d", &time);

// display the SI and CI 
    SI(principal, rate_percent, time); //calling the SI function

    CI(principal, rate_percent, time); //calling the CI function

    return 0;
}