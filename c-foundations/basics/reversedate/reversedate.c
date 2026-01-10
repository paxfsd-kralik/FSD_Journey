/*
Name: reversedate.c
Purpose: Adds two fractions and allows the user to add spaces before and after each / symbol
Author: Jindra Kralik
*/

#include <stdio.h>

int	main(void)
{
	int	day, month, year;

	printf("Enter the date (dd/mm/yyyy): ");
	scanf("%d / %d / %d", &day, &month, &year);

	printf("The reversed date you entered is: %04d%02d%02d\n", year, month, day);
	return 0;
}