//Write a C program to check if a number is even or odd

#include <stdio.h>

int main() {
    // Declares variable to store the number
    int number;

    // Takes integer input from the user
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Checks if the number is even or odd
    if (number % 2 == 0) {
        printf("%d is even.\n", number);
    } else {
        printf("%d is odd.\n", number);
    }

    return 0;
}
