/*
Name: formatPrintf.c
Purpose: Understand the different formats applicable to the printf outputs
Author: Jindra Kralik
*/

#include <stdio.h>

int	main(void)
{
	int k;
	float	w, y, z;
	w = 27.39012;

	printf("%6d,%4d\n", 86, 1040);
	printf("%12.5e\n", 30.253);
	printf("%.4f\n", 83.162);
	printf("%-6.2g\n", .0000009979);

	
	printf("%-8.1e\n", w);
	printf("%10.6e\n", w);
	printf("%-8.3f\n", w);
	printf("%6f\n", w);

	printf("input the second values:");
	scanf("%f%d%f", &y, &k, &z);
	printf("%f\n%d\n%f\n", y, k, z);

	return 0;
}