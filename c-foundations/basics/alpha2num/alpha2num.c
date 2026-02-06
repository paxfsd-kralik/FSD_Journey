/*
Name: alpha2num.c
Purpose: Changes an alphabetic phone number to its numeric form
Author: Jindra Kralik
*/

#include <stdio.h>

int	main(void)
{
	char	ch;

	printf("Enter phone number: ");

	while((ch = getchar()) != '\n')
	{
		switch (ch)
		{
			case 'A': case 'B': case 'C':
				printf("2");
				/* FALLTHROUGH */
				break;
			case 'D': case 'E': case 'F':
				printf("3");
				/* FALLTHROUGH */
				break;
			case 'G': case 'H': case 'I':
				printf("4");
				/* FALLTHROUGH */
				break;
			case 'J': case 'K': case 'L':
				printf("5");
				/* FALLTHROUGH */
				break;
			case 'M': case 'N': case 'O':
				printf("6");
				/* FALLTHROUGH */
				break;
			case 'P': case 'R': case 'S':
				printf("7");
				/* FALLTHROUGH */
				break;
			case 'T': case 'U': case 'V':
				printf("8");
				/* FALLTHROUGH */
				break;
			case 'W': case 'X': case 'Y':
				printf("9");
				/* FALLTHROUGH */
				break;
			default:
				printf("%c", ch);
				break;
		}
	}

	printf("\n");
	return 0;
}