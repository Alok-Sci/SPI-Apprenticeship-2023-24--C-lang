//WAP to create a function similar to pow() function of math.h header file.

#include <stdio.h>

//declaration of pow() function
int pow(int, int);

int main(){
    int num, power;

    //input first number
    printf("\nEnter the number: ");
    scanf("%d", &num);

    //input second number
    printf("\nEnter the power: ");
    scanf("%d", &power);

    //display the result
    printf("%d^%d is %d", num, power, pow(num, power));
}

//Function to calculate and return power of a number
int pow(int num, int power){
    int res = 1; 
    for(int i=1; i<=power; i++){
        res = sum*num;
    }
    return sum; 
}