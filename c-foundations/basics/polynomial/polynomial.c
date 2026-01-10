/*
Name: tax.c
Purpose: Prompts the user to provide a value and solves a given polynomial expression
Author: Jindra Kralik
*/

#include <stdio.h>

int main (void)
{
	int	x;
	int	result;

	printf("To solve the polynomial expression '3x⁵ + 2x⁴ - 5x³ - x² + 7x - 6' enter the value of x:\n");
	scanf("%d", &x);

	result = ((((3 * (x) +2) * x - 5) * x -1) * x +7)* x - 6;

	printf("The result is: %d\n", result);

	return 0;
}