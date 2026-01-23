/*
Name: beaufort.c
Purpose: The user inputs the wind force in knots and the program compares it to the Beaufort scale and provides the magnitude accordingly 
Author: Jindra Kralik
*/

#include <stdio.h>

int	main(void)
{
	int	w_speed;

	printf("Enter the wind speed: ");
	scanf("%d", &w_speed);

	if (w_speed < 0)
	{
		w_speed = -w_speed;
	}
	if (w_speed < 1)
		printf("Beaufort say's it is 'Calm'\n");
	else	if (w_speed < 4)
				printf("Beaufort say's it is 'light air'\n");
	else	if (w_speed < 28)
				printf("Beaufort say's it is a 'breeze'\n");
	else	if (w_speed < 48)
				printf("Beaufort say's it is a 'gale'\n");
	else	if (w_speed < 64)
				printf("Beaufort say's it's a 'storm'\n");
	else	if (w_speed >= 64)
				printf("Beaufort say's it's a 'hurricane'\nRUUUUUUUUN!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
	return 0;
}