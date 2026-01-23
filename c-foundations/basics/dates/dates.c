/*
Name: date.c
Purpose: The user inputs a two dates and the program determines which comes earlier in the calendar 
Author: Jindra Kralik
*/

#include <stdio.h>

int	main(void)
{
	int	y1, y2, m1, m2, d1, d2;

	printf("Enter the first date (dd/mm/yy): ");
	scanf("%2d/%2d/%2d", &d1, &m1, &y1);
	printf("Enter the second date (dd/mm/yy): ");
	scanf("%2d/%2d/%2d", &d2, &m2, &y2);

	if (y1 == y2 && m1 == m2 && d1 == d2)
		printf("The dates are equal, provide two different dates.\n");

	else	if (y1 < y2 || (y1 == y2 && m1 < m2) || (y1 == y2 && m1 == m2 && d1 < d2))
				printf("%.2d/%.2d/%.2d comes earlier than %.2d/%.2d/%.2d\n", d1, m1, y1, d2, m2, y2);
			else
				printf("%.2d/%.2d/%.2d comes earlier than %.2d/%.2d/%.2d\n", d2, m2, y2, d1, m1, y1);
	return 0;

	/* if (y1 == y2 && m1 == m2 && d1 == d2) 
		printf("The dates are equal, provide two different dates.\n");
	else	if (y1 == y2 && m1 == m2)
			{
				if (d1 < d2)
					printf("%.2d/%.2d/%.2d comes earlier than %.2d/%.2d/%.2d\n", d1, m1, y1, d2, m2, y2);
				else
					printf("%.2d/%.2d/%.2d comes earlier than %.2d/%.2d/%.2d\n", d2, m2, y2, d1, m1, y1);
			}
	else	if (y1 == y2)
			{
				if (m1 < m2)
					printf("%.2d/%.2d/%.2d comes earlier than %.2d/%.2d/%.2d\n", d1, m1, y1, d2, m2, y2);
				else
					printf("%.2d/%.2d/%.2d comes earlier than %.2d/%.2d/%.2d\n", d2, m2, y2, d1, m1, y1);
			}
	else	if (y1 < y2)
				printf("%.2d/%.2d/%.2d comes earlier than %.2d/%.2d/%.2d\n", d1, m1, y1, d2, m2, y2);
			else
				printf("%.2d/%.2d/%.2d comes earlier than %.2d/%.2d/%.2d\n", d2, m2, y2, d1, m1, y1);
	return 0; */
}