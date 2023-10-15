//Write a C program which outputs the grades corresponding to a given mark


#include <stdio.h>
#include <stdlib.h>
int main()
{
    //Declares the variable mark
	float mark;

    //Takes the input from the user
	printf("Enter the mark out of 100\n");
	scanf("%f",&mark);

    //Checks and outputs the grade
	if(mark>=90)
		printf("O\n");
	else if(mark>=85&&mark<90)
		printf("A+\n");
	else if(mark>=80&&mark<85)
		printf("A\n");	
	else if(mark>=70&&mark<80)
		printf("B+\n");
	else if(mark>=60&&mark<70)
		printf("B\n");
	else if(mark>=50&&mark<60)
		printf("C\n");	
	else if(mark>=45&&mark<50)
		printf("P\n");			
	else
		printf("F\n");	
	return 0;
}		