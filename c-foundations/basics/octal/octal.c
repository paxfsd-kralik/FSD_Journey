/*
Name: octal.c
Purpose: Promts the user to provide a number between 0 and 32767 and then prints it on the standard output in octal base
Author: Jindra Kralik
*/

#include <stdio.h>

int	main(void)
{
	int	digit, a1, a2, a3, n1, n2, n3, n4, n5;

	printf("Enter a number between 0 and 32767: ");
	scanf("%5d", &digit);

	n1 = digit % 8;
	a1 = digit / 8;
	n2 = a1 % 8;
	a2 = a1 / 8;
	n3 = a2 % 8;
	a3 = a2 / 8;
	n4 = a3 % 8;
	n5 = a3 / 8;

	printf("In octal, your number is: %d%d%d%d%d\n", n5, n4, n3, n2, n1);

	return 0;
}