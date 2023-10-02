//Write a c program to compute gross salary based on following parameters:-
// Basic salary    |       HRA     |      DA       
// 1-4000          |       10%     |      50%
// 4001-8000		|       15%		|      60%
// 8001-12000		|       20%     |      70%
// More than 12000	|	    25%		|	   80%

//gs=bs+HRA+DA

#include <stdio.h>

void main(){
    float GS, HRA, DA; //base salary, HRA, and DA
    int BS; //gross salary
    printf("Enter your salary: ");
    scanf("%d", &BS);


    if(BS > 0 && BS <= 4000){
        HRA = (BS / 100) * 10; //max 400
        DA = (BS / 100) * 50; //max 2000
    }
    else if(BS > 4000 && BS <= 8000){
        HRA = ((4000/100) * 10) + ((BS-4000) / 100) * 10; //
        DA = ((4000/100) * 50) + ((BS-4000) / 100) * 50;
    }
    else if(BS > 8000 && BS <= 12000){
        HRA = ((4000/100) * 10) + ((8000/100)* 15) + (((BS-8000) / 100) * 10);
        DA = ((4000/100) * 10) + ((8000/100) * 60) + (((BS-8000) / 100) * 50);
    }
    else if(BS > 12000){
        HRA = (4000/100 * 10) + (4000/100 * 15) + (4000/100 * 20) + (BS-12000 / 100) * 25;
        DA = (4000/100 * 10) + (4000/100 * 60) + (4000/100 * 70) + (BS-12000 / 100) * 80;
    }
    else {
        printf("Invalid Salary: \n");
    }

    // gross salary calculation 
    GS = BS + HRA + DA;
    printf("%d is your Base Salary :\n", BS);
    printf("%.2f is your HRA :\n", HRA);
    printf("%.2f is your DA :\n", DA);
    printf("%.2f is your Gross Salary :\n", GS);
    
}