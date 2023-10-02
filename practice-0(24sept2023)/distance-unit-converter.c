//WAP to input distance in metres and convert them into miles, kilometres and metres
// 1 mile = 1.609 km
// 1 km = 1000 metres

#include <stdio.h>

int main(){
    float distance;
    
    // Get the distance in metres
    printf("Enter distance in metres: ");
    scanf("%f", &distance);

    //initialize constants
    const int m_in_mile = 1609;
    const int m_in_km = 1000;

    // calculate the distance in miles, kilometres and metres
    int mile = distance / m_in_mile;
    distance -= mile * m_in_mile; // subtract the miles from the distance
    int km = distance / m_in_km;
    distance -= km * m_in_km; // subtract the kilometres from the distance
    int m = distance;

    // Display the distance in miles, kilometres and metres
    printf("Distance is %d miles, %d kilometres, and %d metres\n", mile, km, m);
    


}