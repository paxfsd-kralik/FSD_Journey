/*
Name: random.c
Purpose: Prints uninitialized variables to see if they follow a pattern
Author: Jindra Kralik
*/

#include <stdio.h>

int	main(void)
{
	int		a, b, c;
	float	x, y, z;

	printf("Integers:\n");
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	printf("c = %d\n", c);

	printf("Floats:\n");
	printf("x = %.2f\n", x);
	printf("y = %.2f\n", y);
	printf("z = %.2f\n", z);

	return 0;
}