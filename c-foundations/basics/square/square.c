/*
Name: square.c
Purpose: Prints a table of squares using a while statement
Author: Jindra Kralik
*/

#include <stdio.h>
int	main(void)
{
	int	i, n;
	printf("This program prints a table of squares.\n");
	printf("Enter number of entries in table: ");
	scanf("%d", &n);
	
	/* This lines gets the character leftover by scanf*/
	while (getchar() != '\n');
	/*if it is not added it bugs the nested while loop*/

	i = 1;

	while (i <= n)
	{
		printf("%10d%10d\n", i, i * i);
		if ((i % 24) == 0)
		{
			printf("Press enter to continue: ");
			while(getchar() != '\n')
			{}
		}
		i++;	
	}
	return 0;
}	