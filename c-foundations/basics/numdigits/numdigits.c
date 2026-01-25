/*
Name: numdigits.c
Purpose: Counts the number of digits in an integer 
Author: Jindra Kralik
*/

#include <stdio.h>

int	main(void)
{
	int	i, n;

	printf("Enter an integer number: ");
	scanf("%d", &n);

	if (n < 0)
		n = -n;
	do	{
		n = n/10;
		i++;
	}	while (n > 0);

	printf("The number has %d digit(s).\n", i);
	return 0;
}