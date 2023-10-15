/*Write a C program to check if a character is vowel or not*/

#include <stdio.h>
#include <stdlib.h>
int main()
{

    //declares the variable
	char a;

    //takes character as input
	printf("Enter a character\n");
	scanf("%c",&a);

    //checks if the character is vowel or not
	switch(a)
	{
		case 'a':
		{
			printf("Vowel\n");
			break;
		}	
		case 'e':
		{
			printf("Vowel\n");
			break;
		}	
		case 'i':
		{
			printf("Vowel\n");
			break;
		}	
		case 'o':
		{
			printf("Vowel\n");
			break;
		}	
		case 'u':
		{
			printf("Vowel\n");
			break;
		}
		default:
			printf("Not a vowel\n");
	}
	return  0;
}					