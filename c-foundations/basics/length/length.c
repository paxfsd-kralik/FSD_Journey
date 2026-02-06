/*
Name: length.c
Purpose: Determines the length of a message
Author: Kralik
*/
 
#include <stdio.h>

int	main(void)
{
	char	ch;
	int		length = 0;

	printf("Enter a message: ");
	ch = getchar();
	while(ch != '\n')
	{
		ch = getchar();
		length++;
	}
	printf("Your message was %d character(s) long.\n", length);

	return 0;
}