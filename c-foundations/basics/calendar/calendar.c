/*
Name: calendar.c
Purpose: Print a one month calendar
Author: Jindra Kralik
*/

#include <stdio.h>

int	main(void)
{
	int	i, ndays, sday;

	printf("Enter number of days in month: ");
	scanf ("%d", &ndays);
	printf("Enter starting day of the week (1=Sun, 7=Sat): ");
	scanf("%d", &sday);

	i = 1;
	while (i < sday)
	{
		printf("   ");
		i++;
	}

	for (i = 1; i <= ndays; i++)
	{
		printf("%3d", i);

		if ((i + sday - 1)  % 7 == 0)
			printf("\n");
	}

	printf("\n");
	return 0;
}