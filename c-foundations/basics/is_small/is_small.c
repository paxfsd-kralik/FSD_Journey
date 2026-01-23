/*
Name: is_small.c
Purpose: Prompts the user to input a four integers and displays the smallest and the biggest in the standard output
Author: Jindra Kralik
*/

#include <stdio.h>

int	main(void)
{
	int a, b, c, d, smallest, largest;

	printf("Enter four integers: ");
	scanf("%d %d %d %d", &a, &b, &c, &d);

	if (a > b )
	{
		largest = a;
		smallest = b;
	}
	else 
	{
		largest = b;
		smallest = a;
	}
	if ( c > largest)
	{
		largest = c;
	}
	else	if (c < smallest)
		{
			smallest = c;
		}
	if (d > largest)
	{
		largest = d;
	}
	else if (d < smallest)
	{
		smallest = d;
	}
	printf("Largest: %d\n", largest);
    printf("Smallest: %d\n", smallest);
	
	return 0;
}
