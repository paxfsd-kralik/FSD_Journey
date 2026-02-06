/*
Name: length.c
Purpose: Determines the length of a message
Author: Kralik
*/
 
#include <stdio.h>

int	main(void)
{
	int		length = 0;

	printf("Enter a message: ");
	while(getchar() != '\n')
	{
		length++;
	}
	printf("Your message was %d character(s) long.\n", length);

	return 0;
}