/*
Name: triad.c
Purpose: Evaluate and assign a value from -1 to 1 to a number if it is smaller, equal or greater than the one compared to.
Author: Jindra Kralik
*/

#include <stdio.h>

int	main(void)
{
	/* int	i, j;

	i = 5;
	j = 6;
	printf("%d\n", (i != j) ? (i < j ? -1 : 1) : 0);
	return 0; */

	int i, j;

	printf("Enter a two digit number: ");
	scanf("%1d%1d", &i, &j);
	printf("%d\n", (i > j) - (i < j));
	return 0;
}