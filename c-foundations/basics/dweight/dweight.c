/*
Name: dweight.c
Purpose: Computes the dimensional weight of a box from an input provided by the user
Author: Jindra Kralik
*/

#include <stdio.h>

int	main(void)
{
	int	height,	length,	width,	volume,	weight;

	printf("Enter the HEIGHT of the box: ");
	scanf("%d", &height);
	printf("Enter the LENGTH of the box: ");
	scanf("%d", &length);
	printf("Enter the WIDTH of the box: ");
	scanf("%d", &width);
	volume	=	height*length*width;
	weight	=	(volume + 165)/166;

	printf("Volume (in3): %d\n", volume);
	printf("Dimensional weight (pounds) : %d\n", weight);

	return 0;
}