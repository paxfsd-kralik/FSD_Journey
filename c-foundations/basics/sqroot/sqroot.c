/*
Name: sqroot.c
Purpose: Computes the approximate square root of a number provided by the user using the Newton's method
Author: Jindra Kralik
*/
#include <stdio.h>
#include <math.h>

int	main()
{
	double	x, y = 1.0, temp, avg;

	printf("Enter a positive number: ");
	scanf("%le", &x);

	while(y)
	{
		temp = x / y;
		avg = (y + temp) / 2;
		if(fabs(avg - y) < (0.00001 * y))
			break;
		y = avg;
	}

	printf("The square root of %.2f is %.5f\n", x, y);
	return 0;
}