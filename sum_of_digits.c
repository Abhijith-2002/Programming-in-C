/* Write a C Program to find the sum of the digits of a number and also print the no of digits*/


#include<stdio.h>
#include<stdlib.h>
int main()
{

    //Variable declaration
	int n,i=0,sum=0;

    //Takes the number as input
	printf("Enter the number\n");
	scanf("%d",&n);

    //Finds the sum of digits
	while (n!=0) 
	{
            sum=sum+n%10;
            n=n/10;
            i++;
        }
        printf("Sum of digits = %d\n",sum);
        printf("No: of digits = %d\n",i);
        return 0;
} 