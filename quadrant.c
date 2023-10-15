/*Write a C program to check in which quadrant as given point lies*/


#include <stdio.h>
#include <stdlib.h>
int main()
{

    //Declares the variables
	int x,y;

    //Takes the co-ordinates as input
	printf("Enter the x co-ordinate\n");
	scanf("%d",&x);
	printf("Enter the y co-ordinate\n");
	scanf("%d",&y);
    
    //Checks the quadrant
	if(x>0&&y>0)
		printf("First quadrant\n");
	else if(x<0&&y>0)
		printf("Second quadrant\n");
	else if(x<0&&y<0)
		printf("Third quadrant\n");
	else if(x>0&&y<0)
		printf("Fourth quadrant\n");
	else
		printf("Origin\n");
	return 0;
}					