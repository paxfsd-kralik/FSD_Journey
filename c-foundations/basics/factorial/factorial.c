/*
Name: factorial.c
Purpose: Computes the factorial number of a positive integrer
Author: Jindra Kralik
*/

#include <stdio.h>

int	main()
{
	int	i = 0;
	int	number;
	int	temporary = 1;
	short int	factorial;

	printf("Enter a positive integer number: ");
	scanf("%i", &number);

	if(number == 0)
	{
		factorial = 1;
		printf("The factorial of 0 is 1\n");
		return 0;
	}
	while(number > 0)
	{
		factorial = number * (temporary);
		temporary = factorial;
		number--;
		i++;
	}

	printf("The factorial of %i is %hd\n", i, factorial);
	return 0;
}