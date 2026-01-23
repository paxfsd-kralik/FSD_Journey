/*
Name: timeFormat.c
Purpose: The user inputs the time in 24 hr format and the program prints it to the standard output in 12 hr format 
Author: Jindra Kralik
*/

#include <stdio.h>

int	main(void)
{
	int	hours, minutes;

	printf("Enter the time in 24 hr format: ");
	scanf("%2d:%2d", &hours, &minutes);

	if (hours < 12)
	{
		printf("Equivalent 12-hour time: %.2d:%.2d AM\n", ((hours == 0) ? (hours + 12) : (hours)), minutes);				
	}

	else 
	{
	printf("Equivalent 12-hour time: %.2d:%.2d PM\n", ((hours == 12) ? (hours) : (hours - 12)), minutes);
	}

	return 0;
}