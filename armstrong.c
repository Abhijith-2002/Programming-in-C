/*Write a C program to check if a given number is an armstrong number or not*/


#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{

    //Variable declaration
	int n,sum=0,x,i;

    //Takes the number as input
	printf("Enter the number\n");
	scanf("%d",&n);
	i=n;

    //Checks if the given number is armstrong number or not
	while (n>0) 
	{
            x=n%10;
            sum=sum+(x*x*x);
            n=n/10;
        }
        if(sum==i)
        	printf("Armstrong number\n");
        else
        	printf("Not an Armstrong number\n");
        return 0;
} 