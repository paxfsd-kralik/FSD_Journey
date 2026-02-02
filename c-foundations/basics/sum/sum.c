/*
Name: sum.c
Purpose: Sums a series of numbers
Author: Jindra Kralik
*/

#include <stdio.h>

int	main(void)
{
	long int n, sum;

	printf("This program sums a set of integers.\n");
	printf("Enter integers (0 to terminate): ");
	scanf("%d", &n);

	while (n != 0)
	{
		sum += n;
		scanf("%ld", &n);
	}

	printf("The sum is : %ld\n", sum);
	return 0;
}