/*
Name: reversedigitsNA.c
Purpose: Promts the user to provide a two or a three digit number and prints it reversed in the standard output
without using algebra
Author: Jindra Kralik
*/

#include <stdio.h>

int	main(void)
{

	int	n1, n2, n3;

	printf("Enter a three digit number: ");
	scanf("%1d%1d%1d", &n1, &n2, &n3);

	printf("The reversal is: %d%d%d\n", n3, n2, n1);

	return 0;
}