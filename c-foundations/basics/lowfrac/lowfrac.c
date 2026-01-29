/*
Name: gdc.c
Purpose: The user enters a fraction and the program reduces it to its lowest terms
Author: Jindra Kralik
*/

#include <stdio.h>

int	main(void)
{
	int	n1, d1, mod, n2, d2;

	printf("Enter a fraction: ");
	scanf("%d/%d", &n1, &d1);

	n2 = n1;
	d2 = d1;

	while (d2 != 0)
	{
		mod = n2 % d2;
		n2 = d2;
		d2 = mod; 
	}

	n1 = n1 / n2;
	d1 = d1 / n2;
	
	printf("In lowest terms: %d/%d\n", n1, d1);
	return 0;
}