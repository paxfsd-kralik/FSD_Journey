/*
Name: square4.c
Purpose: Prints all even squares between 1 and n
Author: Jindra Kralik
*/

#include <stdio.h>

int	main(void)
{
	int	i, n;

	printf("Enter a number: ");
	scanf("%d", &n);

	for (i = 2; (i * i) <= n; i += 2)
		printf("%d\n", i * i);
		
	return 0;
}