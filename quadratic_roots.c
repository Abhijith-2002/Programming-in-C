//Write a C program to find the roots of a quadratic equation


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    //Declares the variables
	float a,b,c,d,x1,x2,real,imag;

    //Takes the coefficients of the quadratic equation as input
	printf("Enter the coefficents a,b,and c of the quadratic equation (ax^2+bx+c)\n");
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
	d = (b*b)-4*a*c;

    //finds the roots of the quadratic equation
	if(d==0)
	{
		x1 = (-b+(sqrt(d))/(2*a));
		printf("Roots of quadratic equation are equal\n");
		printf("%f %f\n",x1,x1);
	}
	else if(d>0)
	{	
		x1 = (-b+(sqrt(d)))/(2*a);
		x2 = (-b-(sqrt(d)))/(2*a);
		printf("Roots of quadratic equation are\n");
		printf("%f\n",x1);
		printf("%f\n",x2);
	}
	else
	{
		real = -b/2*a;
		imag = sqrt(-d)/(2*a);
		printf("Roots of quadratic equation are\n");
		printf("%0.2f+%0.2fi\n",real,imag);
		printf("%0.2f-%0.2fi\n",real,imag);
	}	
	return 0;
}	