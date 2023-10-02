//  WAP to input a choice and print according to the following:
// i.) If choice = 1 ----> convert temperature from Celsius to Fahrenheit 
// ii.) If choice = 2 ----> convert temperature from Fahrenheit to Celsius 
// iii.) If choice = 3 ----> convert temperature from Celsius to Kelvin 
// iv.) If choice = 4 ----> convert temperature from Kelvin to Celsius

#include <stdio.h>

// Function to calculate temperature from Celsius to Fahrenheit
void celsiusToFahrenheit(int num){
    float result = (num * 9/5) + 32;
    printf("\nTemperature in Fahrenheit: %.2f", result);
    return;
}

// Function to calculate temperature from Fahrenheit to Celsius
void fahrenheitToCelsius(int num){
    float result = (num - 32) * 5/9;
    printf("\nTemperature in Celsius: %.2f", result);
    return;
}

//Function to calculate temperature from Celsius to Kelvin
void celsiusToKelvin(int num){
    float result = num + 273;
    printf("\nTemperature in Kelvin: %.2f", result);
    return;
}

//Function to calculate temperature from Kelvin to Celsius
void kelvinToCelsius(int num){
    float result = num - 273;
    printf("\nTemperature in Celsius: %.2f", result);
    return;
}

int main(){

    // menu
    printf("Select an option from the following:\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("3. Celsius to Kelvin\n");
    printf("4. Kelvin to Celsius\n");

    // choice input
    int choice;
    printf("Enter your choice: ");
    scanf("%d", &choice);

    // choice processing
    int num;
    switch (choice){
        case 1:
            printf("\nConvert Temperature from Celsius to Fahrenheit\n");
            printf("Enter the temperature in Celsius: ");
            scanf("%d", &num);
            celsiusToFahrenheit(num);
            break;
        case 2:
            printf("\nConvert Temperature from Fahrenheit to Celsius\n");
            printf("Enter the temperature in Fahrenheit: ");
            scanf("%d", &num);
            fahrenheitToCelsius(num);
            break;
        case 3:
            printf("\nConvert Temperature from Celsius to Kelvin\n");
            printf("Enter the temperature in Celsius: ");
            scanf("%d", &num);
            celsiusToKelvin(num);
            break;
        case 4:
            printf("\nConvert Temperature from Kelvin to Celsius\n");
            printf("Enter the temperature in Kelvin: ");
            scanf("%d", &num);
            kelvinToCelsius(num);
            break;
        default:
            printf("Invalid Choice\n");
    }
}