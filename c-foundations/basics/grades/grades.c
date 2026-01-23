/*
Name: grades.c
Purpose: The user inputs a numeric grade and the program translates it into its letter equivalent 
Author: Jindra Kralik
*/

#include <stdio.h>

int	main(void)
{
	int grade;
	printf("Enter the numerical grade: ");
	scanf("%d", &grade);

	if (grade < 0 || grade > 100)
	{
		printf("Enter a valid grade!\n");
		return 0;
	}

	switch (grade / 10)
	{
		case 10:
		/* fall through */
		case 9:
			printf("Letter grade : A\n");
			break;
		case 8:
			printf("Letter grade : B\n");
			break;
		case 7:
			printf("Letter grade : C\n");
			break;
		case 6:
			printf("Letter grade : D\n");
			break;
		default:
			printf("Letter grade : F\nYou Lose!\n");
	}
	return 0;
}