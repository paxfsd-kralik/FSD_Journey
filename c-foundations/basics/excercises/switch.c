/*
Name: switch.c
Purpose: Understand the fallthrough in the function switch
Author: Jindra Kralik
*/

#include <stdio.h>

int	main(void)
{
	int	i;

	printf("Enter a single digit number: ");
	scanf("%1d", &i);

	switch (i % 3)
	{
	case 0:	printf("zero");
			break;
	case 1:	printf("one");
			break;
	case 2:	printf("two");
			break;
	}

	return 0;
}