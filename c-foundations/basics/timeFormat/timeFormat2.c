/*
Name: timeFormat2.c
Purpose: The user inputs the time in 12 hr format and the program prints it to the standard output in 24 hr format 
Author: Jindra Kralik
*/

#include <stdio.h>

int	main(void)
{
	int		hours, minutes;
	char	meridien;

	printf("Enter the time in 12-hour format: ");
	scanf("%2d:%2d %c", &hours, &minutes, &meridien);
	
	if (meridien == 'A' || meridien == 'a')
		printf("Equivalent 24-hour time: %.2d:%.2d\n", ((hours == 12) ? (hours -= 12) : (hours)), minutes);
	else
	printf("Equivalent 24-hour time: %.2d:%.2d\n", ((hours == 12) ? (hours) : (hours += 12)), minutes);
	return 0;
}