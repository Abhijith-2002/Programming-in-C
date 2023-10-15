//Write a C program to check whether a year is leap year or not


#include <stdio.h>
#include <stdlib.h>
int main()
{
    //Declares the variables
	int year;

    //Takes the input
	printf("Enter a year\n");
	scanf("%d",&year);

    //Checks for leap year
	if((year % 400) && (year % 4 == 0) && (year % 100!= 0))
		printf("Leap year\n");
	else
		printf("Not a leap year\n");
	return 0;
}			