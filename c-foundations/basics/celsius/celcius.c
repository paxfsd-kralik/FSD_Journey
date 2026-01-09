/*
Name: celcius.c
Purpose: Computes the equivalent in celcius degrees from a farenheit degrees input from the user
Author: Jindra Kralik
*/

#include <stdio.h>

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f/9.0f)

int	main(void)
{
	float farenheit;
	printf("Enter the Farenheit temperature: ");
	scanf("%f", &farenheit);
	printf("Celsius equivalent: %.1f\n", SCALE_FACTOR*(farenheit-FREEZING_PT));
	return 0;
}