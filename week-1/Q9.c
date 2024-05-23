// The distance between two cities (in km.) is input through the
// keyboard. Write a program to convert and print this distance
// in meters, feet, inches and centimeters.

#include <stdio.h>

int main()
{
    float distance_km;
    float distance_meters, distance_feet, distance_inches, distance_centimeters;

    printf("Enter the distance between two cities in kilometers: ");
    scanf("%f", &distance_km);

    distance_meters = distance_km * 1000.0;

    distance_feet = distance_km * 3280.84;

    distance_inches = distance_km * 39370.1;

    distance_centimeters = distance_km * 100000.0;

    printf("Distance in meters: %.2f m\n", distance_meters);
    printf("Distance in feet: %.2f ft\n", distance_feet);
    printf("Distance in inches: %.2f in\n", distance_inches);
    printf("Distance in centimeters: %.2f cm\n", distance_centimeters);

    return 0;
}
