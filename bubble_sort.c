/*Bubble Sort ( ascending order )*/


#include <stdio.h>
#include <stdlib.h>
int main()
{

    //variable declaration
  	int array[100], n, c, d, swap;

    //takes numbers as input
  	printf("Enter number of elements\n");
  	scanf("%d", &n);
	printf("Enter %d integers\n", n);
	for (c = 0; c < n; c++)
    		scanf("%d", &array[c]);

    //bubble sort
	for (c = 0 ; c < n - 1; c++)
  	{
    		for (d = 0 ; d < n - c - 1; d++)
    		{
      			if (array[d] > array[d+1])
      			{
        			swap = array[d];
        			array[d]   = array[d+1];
        			array[d+1] = swap;
      			}
    		}
  	}

    //displays sorted list
	printf("Sorted list in ascending order:\n");
	for (c = 0; c < n; c++)
     	printf("%d\n", array[c]);
	return 0;
}