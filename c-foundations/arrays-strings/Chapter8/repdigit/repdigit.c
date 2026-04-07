/*
Name: repdigit.c
Purpose: The program checks if the number provided by the user contains repeated digits
Author: Jindra Kralik
*/

#include <stdbool.h>
#include <stdio.h>

int	main (void)
{
	bool digit_seen[10] = {false};
	int	digit;
	long number;

	printf("Enter a number: ");
	scanf ("%ld", &number);
	
	while (number > 0)
	{
		digit = number % 10;
		if (digit_seen[digit])
			break;
		digit_seen[digit] = true;
		number = number / 10;
	}
	if (number > 0)
		printf("Repeated digit\n");
	else
		printf("No repeated digit\n");

	return 0;
}
