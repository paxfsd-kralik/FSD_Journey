/*
Name: tax.c
Purpose: Prompts the user to provide a value and a tax percentage. The value with the added tax percentage is then printed in the standard output
Author: Jindra Kralik
*/

#include <stdio.h>

int	main(void)
{
	float	euro;
	float	tax;
	float	plusTax;

	printf("Enter the amount of EURO-and-cents:");
	scanf("%f", &euro);
	printf("Enter the TAX value (0-100):");
	scanf("%f", &tax);

	plusTax = euro * (1 + tax / 100);

	printf("The ammount with TAX is: %.2f\n", plusTax);

	return 0;
}