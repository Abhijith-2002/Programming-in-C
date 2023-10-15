/*Linear Search*/


#include <stdio.h>
#include <stdlib.h>
int main()
{

    //variable declaration
  	int a[100],s,c,n;

    //takes the number of elements in the array
  	printf("Enter number of elements in array\n");
  	scanf("%d", &n);

    //takes the elements in the array
  	printf("Enter %d integer(s)\n", n);
	for (c=0;c<n;c++)
    		scanf("%d",&a[c]);

    //takes the number to be searched
  	printf("Enter a number to search\n");
  	scanf("%d",&s);

    //linear search
  	for (c=0;c<n;c++)
  	{
    		if (a[c]==s)
    		{
      			printf("%d is present at location %d.\n",s,c+1);
      			break;
    		}
  	}
  	if (c == n)
    		printf("%d isn't present in the array.\n", s);
  	return 0;
}