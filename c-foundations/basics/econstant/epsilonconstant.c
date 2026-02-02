/*
Name: econstant.c
Purpose: The user enters an integer number and the program computes the value of e with it 
Author: Jindra Kralik
*/

#include <stdio.h>

int	main(void)
{
	int		i = 1;
	double	epsilon;
	double	term = 1.0f;
	double	e = 1.0f;

	printf("Enter a small number: ");
    scanf("%lf", &epsilon);

	while (term > epsilon)
	{
		term = term / i;
		e = e + term;
		i++;
	}
	
	printf("Approximation of e: %.10f\n", e);
    return 0;
}