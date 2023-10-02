#include <stdio.h>
#include <math.h>

//declaring a constant to store the value of PI
const double PI = M_PI; //storing value of pi from the constant of math.h header file to PI varaible

// Function to calculate the area of a Circle [A = PI.r^2]
float areaOfCircle(int radius){
    const int area_of_circle = PI * radius * radius;
    printf("Area of circle is %d\n", area_of_circle);

}

// Function to caculate the circumference of a Circle [C = 2.PI.r]
float circumferenceOfCircle(int radius){
    const int circumference_of_circle = 2 * PI * radius;
    printf("Circumference of circle is %d\n", circumference_of_circle);

}

int main() {
    // radius of circle 
    float radius;

    printf("Enter the radius of the Circle: ");
    scanf("%f", &radius);

    // area of circle 
    areaOfCircle(radius);

    // circumference of circle 
    circumferenceOfCircle(radius);

    return 0;

}