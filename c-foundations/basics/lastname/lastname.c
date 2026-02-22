/*
Name: lastname.c
Purpose: The program prompts for a name and a lastname and returns to the standard output the last name, a comma, the initial of the name followed by a period.
Author: Jindra Kralik
*/

#include <stdio.h>

int	main(void)
{
	int		counter = 1;
	char	fname, lname;

	printf("Enter a first and a last name: ");
	scanf(" %c", &fname);
	
	while((lname = getchar()) != ' ')
	{}
	while((lname = getchar()) == ' ')
	{}
	while (lname != '\n')
	{
		if (counter == 1 && lname >= 'a' && lname <= 'z')
		{
				putchar(lname - 32);
		}
		else
			putchar(lname);
		lname = getchar();
		if (lname == '\n')
		{
			if(fname >= 'a' && fname <= 'z')
					fname -= 32;
			printf(", %c.\n", fname);
			break;
		}
		counter += 1;
	}
	
	return 0;
	
}