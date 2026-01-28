/*
Name: largestnum.c
Purpose: confirm the result of King's book excercises 
Author: Jindra Kralik
*/

#include <stdio.h>

int	main(void)
{
	double n, max = 0.0f;

	while (n > 0)
	{
		printf("Enter a number: ");
		scanf("%lf", &n);
		if (n <= 0)
			break;
		if (n > max)
			max = n;
	}
	printf("The largest number entered was %.2f\n", max);

	return 0;
}