/*
Name: gdc.c
Purpose: The user enters two numbers and the program calculates the greatest common divisor among them
Author: Jindra Kralik
*/

#include <stdio.h>

int	main(void)
{
	int	a, b, mod;

	printf("Enter two integers: ");
	scanf("%d %d", &a, &b);

	if ( a < 0)
		a = -a;
	if (b < 0)
		b = -b;

	while (b != 0)
	{
		mod = a % b;
		a = b;
		b = mod;
	}

	printf("The GCD is %d\n", a);
	
	return 0;
}