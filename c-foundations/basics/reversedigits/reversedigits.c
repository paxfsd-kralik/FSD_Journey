/*
Name: reversedigits.c
Purpose: Promts the user to provide a two or a three digit number and prints it reversed in the standard output
Author: Jindra Kralik
*/

#include <stdio.h>

int	main(void)
{
/*	
	int	digit, n1, n2;

	printf("Enter a two digit number: ");
	scanf("%d", &digit);

	n1 = digit % 10;
	n2 = digit / 10;

	printf("The reversal is: %d%d\n", n1, n2);

	return 0;
*/
/* 
	int	digit, a1, n1, n2, n3;

	printf("Enter a three digit number: ");
	scanf("%d", &digit);

	n1 = digit % 10;
	a1 = digit / 10;
	n2 = a1 % 10;
	n3 = a1 / 10;

	printf("The reversal is: %d%d%d\n", n1, n2, n3);

	return 0; 
*/
	int	n;

	printf("Enter an integer number: ");
	scanf("%d", &n);
	printf("The reversed number is: ");

	while (n > 0)
	{
		printf("%d", n % 10);
		n /= 10;
	}

	printf("\n");
	return 0;
}