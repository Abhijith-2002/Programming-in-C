//Write a C program to find the greatest of three numbers.

#include <stdio.h>

int main() {
    // Declares variables to store three numbers
    int num1, num2, num3;

    // Takes three integers as input from user
    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Checks and finds the greatest number
    if (num1 >= num2 && num1 >= num3) {
        printf("%d is the greatest.\n", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("%d is the greatest.\n", num2);
    } else {
        printf("%d is the greatest.\n", num3);
    }

    return 0;
}
