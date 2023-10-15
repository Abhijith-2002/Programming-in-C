//Write a C program to find the area of a circle.
#include <stdio.h>

int main() {
    // Declare the variables
    float radius, area;

    // Takes radius as input from the user
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculates the area
    area = 3.14159 * radius * radius;

    // Displays the result
    printf("The area of the circle with radius %.2f is %.2f\n", radius, area);

    return 0;
}


