/*
Name: vsphere.c
Purpose: Computes the volume of any sphere with radius provided by the user
Author: Jindra Kralik
*/

#include <stdio.h>

int	main(void)
{
	const	float	PI = 3.14159f;

	float	volume;
	float	radius;

	printf("Enter the RADIUS of the sphere: ");
	scanf("%f", &radius);

	volume = (4.0f / 3.0f) * (PI) * (radius * radius * radius); 
	
	printf("The VOLUME of the sphere is: %.2f\n", volume);
	
	return 0;
}