//WAP to find the area and perimeter of an square
//use function void area(int s), and void perimeter(int s)

#include <stdio.h>

// Function to calculate the area of square [A = s*s]
void areaOfSquare(int side){
    const int area_of_square = side*side;
    printf("The area of square is %d\n", area);
}

// Function to calculate perimeter of square [P = s*4]
void perimeterOfSquare(int side){
    const int perimeter_of_square = side*4;
    printf("The perimeter of square is %d\n", perimeter);
}


int main(){
    // side length of square 
    int side;

    printf("Enter the length of the side of square: ");
    scanf("%d", &side);

    // Area of Square 
    areaOfSquare(side);

    // Perimeter of Square 
    perimeterOfSquare(side);

    return 0;
}