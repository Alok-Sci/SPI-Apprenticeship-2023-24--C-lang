//Program to print week days like sunday, monday using if-else

#include<stdio.h>

void main(){
    //prompt for input day number
    int day;
    printf("Enter day number: ");
    scanf("%d",&day);

    //check for valid day number
    if(day<1 || day>7){
        printf("Invalid day number");
    }
    else{
        //print day name
        if(day==1){
            printf("Sunday");
        }
        else if(day==2){
            printf("Monday");
        }
        else if(day==3){
            printf("Tuesday");
        }
        else if(day==4){
            printf("Wednesday");
        }
        else if(day==5){
            printf("Thursday");
        }
        else if(day==6){
            printf("Friday");
        }
        else if(day==7){
            printf("Saturday");
        }
        else{
            printf("Invalid day number");
        }
    }

}