/* C Program to create a simple calculator*/
#include <stdio.h>
#include <stdlib.h>
int main()
{

    //variable declaration
	float a,b;
	float r;
	char o;

    //takes operand as input
	printf("Enter + for addition, - for substraction, * for multiplication and / for division\n");
	scanf("%c",&o);

    //takes numbers as input
	printf("Enter two numbers\n");
	scanf("%f",&a);
	scanf("%f",&b);

    //performs operation
	switch(o)
	{
		case '+':
		{
			r=a+b;
			printf("%f\n",r);
			break;
		}	
		case '-':
		{
			r=a-b;
			printf("%f\n",r);
			break;
		}	
		case '*':
		{
			r=a*b;
			printf("%f\n",r);
			break;
		}	
		case '/':
		{
			r=a/b;
			printf("%f\n",r);
			break;
		}	
		default:
			printf("Invalid operation\n");
	}
	return 0;
}			