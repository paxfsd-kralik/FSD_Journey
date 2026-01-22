/*
Name: numbers.c
Purpose: Prompts the user to input a number and diplays the amount of digits it is composed of 
Author: Jindra Kralik
*/

#include <stdio.h>

int	main(void)
{
	int	number;

	printf("Enter a number: ");
	scanf("%d", &number);

	if (number < 0)
	{
		number = -number;
	}

	if (number < 10)
	{
		printf("The number %d has 1 digit\n", number);
		return 0;
	}
	else	if (number < 100)
			{
				printf("The number %d has 2 digits\n", number);
		return 0;
			}
	else	if (number < 1000)
			{
				printf("The number %d has 3 digits\n", number);
		return 0;
			}
	printf("The number %d does not meet the criteria, must be three digits max.\n", number);
		return 0;
}