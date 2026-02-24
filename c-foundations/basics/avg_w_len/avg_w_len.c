/*
Name: evalexpression.c
Purpose: The program reads and evaluates an expression entered by the user and provides the answer to that expression
Author: Jindra Kralik
*/

#include <stdio.h>

int	main()
{
	char	ch;
	int		i = 0, j = 0, k = 0;
	float	avg = 0.0f;

	printf("Enter a sentence: ");

	while((ch = getchar()) != '\n')
	{		
		if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
			i++;
		else	if(ch == ' ' || ch == '.')
		{
			if(i > 0)
			{
				j = j + i;
				k++;
				i = 0;
			}
		}
	}
	if(i > 0)
	{
		j = j + i;
		k++;
	}
	avg = (float) j / k;
	printf("The average word length is: %.1f\n", avg);
	return 0;
}