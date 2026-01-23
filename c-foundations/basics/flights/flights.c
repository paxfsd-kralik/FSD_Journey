/*
Name: flights.c
Purpose: Prompt the user for a time in 24 hr format and find the closest flight to that arture time
Author: Jindra Kralik
*/

#include <stdio.h>

int	main(void)
{
	int vf1;
	int vf2;
	int vf3;
	int vf4;
	int vf5;
	int vf6;
	int vf7;
	int vf8;
	int	h1, m1, v1;
	
	vf1 = 480;
	vf2 = 583;
	vf3 = 679;
	vf4 = 767;
	vf5 = 840;
	vf6 = 945;
	vf7 = 1140;
	vf8 = 1305;

	printf("Enter the time in 24 hr format: ");
	scanf("%2d:%2d", &h1, &m1);

	v1 = h1 * 60 + m1;

	if (v1 <= (vf1 + vf2) / 2)
		printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.\n");
	else if (v1 <= (vf2 + vf3) / 2)
		printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.\n");
	else if (v1 <= (vf3 + vf4) / 2)
		printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.\n");
	else if (v1 <= (vf4 + vf5) / 2)
		printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.\n");
	else if (v1 <= (vf5 + vf6) / 2)
		printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.\n");
	else if (v1 <= (vf6 + vf7) / 2)
		printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.\n");
	else if (v1 <= (vf7 + vf8) / 2)
		printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.\n");
	else 
		printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.\n");
	return 0;
}