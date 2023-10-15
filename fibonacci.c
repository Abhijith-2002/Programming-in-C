/*Write a C program to print the first n Fibonacci numbers*/

#include <stdio.h>
#include <stdlib.h>
int main()
{

    //variable declaration
	int a=0,b=1,c,n,i;

    //inputs the no of terms
	printf("Enter the no of terms\n");
	scanf("%d",&n);
	i=0;

    //prints the fibonacci series
	if(n==1)
		printf("%d,",a);
	else if(n==2)
	{	
	        printf("%d,",a);
		printf("%d,",b);
	}
	else
	{
       		printf("%d,",a);
		printf("%d,",b);
		do
        	{
            		c=a+b;	
            		printf("%d,",c);
           		a=b;
            		b=c;
            		i++;
        	}
        	while(i!=(n-2));
        	printf("\n");
        }	
        return 0;
}