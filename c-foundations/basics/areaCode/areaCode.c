/*
Name: areaCodes.c
Purpose: The user inputs aan area code and displays the city it corresponds to 
Author: Jindra Kralik
*/

#include <stdio.h>

int	main(void)
{
	int	areaCode;

	printf("Enter the Area Code: ");
	scanf("%3d", &areaCode);

	switch (areaCode)
	{
	case 404: case 470: case 678: case 770:
		printf("Atlanta\n");					break;
	case 229:
		printf("Albany\n");					break;
	case 478:
		printf("Macon\n");					break;
	case 706: case 762:
		printf("Columbus\n");					break;
	case 912:
		printf("Savannah\n");					break;
	default: 
		printf("Area code not recognized\n");	break;
	}

	return 0;
}