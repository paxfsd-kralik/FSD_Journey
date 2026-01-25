/*
Name: countdown.c
Purpose: Prints a countdown starting from an integer provided by the user 
Author: Jindra Kralik
*/

#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	int	i, n;

	printf("Enter the number to start the countdown: ");
	scanf("%d", &n);

	for (i = n; i > 0; --i)
	{
		printf("T minus %d and counting\n", i);
		fflush(stdout);
		sleep(1);
	}

	printf("Lift off!!!!!!!!!!!!!!!!!!\n");
	return 0;
}