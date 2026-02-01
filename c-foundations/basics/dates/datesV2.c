/*
Name: datesV2.c
Purpose: The user inputs dates and the program determines which comes earlier in the calendar
Author: Jindra Kralik
*/

#include <stdio.h>

int	main(void)
{
	int	d1, m1, y1;
	int d2, m2, y2;

	printf("Enter a date (dd/mm/yy): ");
	scanf("%d/%d/%d", &d1, &m1, &y1);

	while (1)
	{
		printf("Enter a date (dd/mm/yy): ");
		scanf("%2d/%2d/%2d", &d2, &m2, &y2);
		if ((d2 == 0) && (m2 == 0) && (y2 == 0))
			break;
		if	(y2 < y1 ||
			(y2 == y1 && m2 < m1) ||
			(y2 == y1 && m2 == m1 && d2 < d1))
		{
			d1 = d2;
			m1 = m2;
			y1 = y2; 
		}
	}
		
	printf("%02d/%02d/%02d is the earliest date\n", d1, m1, y1);	
	return 0;
}