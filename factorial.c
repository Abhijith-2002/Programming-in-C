/*Write a C program to find the factorial of a number ( uses for loop )*/

#include <stdio.h>
#include<stdlib.h>
int main()
{

    //variable declaration
	int i,n,fact=1;

    //takes the number as input
	printf("Enter the number\n");
	scanf("%d",&n);

    //for loop to find the factorial
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}

    //prints the factorial
	printf("Factorial = %d\n",fact);
	return 0;
}

