/*Wrtie a C program to check whether the given number is prime or not*/

#include <stdio.h>
#include <stdlib.h>
int main()
{

    //Declares the variables
	int i,x=0,n;

    //Takes number as input
	printf("Enter a number\n");
	scanf("%d",&n);

    //Checks whether the number is prime or not
	if(n==1)
		printf("Neither a prime number nor a composite number\n");
	else
	{	
		for(i=1;i<=n;i++)
		{
			if(n%i==0)
				x=x+1;
		}
		if(x>2)
			printf("Composite number\n");
		else	
			printf("Prime number\n");
	}		
	return 0;
}		
		