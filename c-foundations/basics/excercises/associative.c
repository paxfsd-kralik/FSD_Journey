/*
Name: associative.c
Purpose: Understand the associative order of operators
Author: Jindra Kralik
*/

#include <stdio.h>

int	main(void)
{
	/* int i, j, k;

	i = 2;
	j = 3;
	k = i * j == 6;

	printf("%d\n", k);
	return 0; */

	/* int i, j, k;
	i = 5;
	j = 10;
	k = 1;

	printf("%d\n", k > i < j);
	return 0; */

	/* int i, j, k;
	i = 3;
	j = 2;
	k = 1;

	printf("%d\n", i > j == j < k);
	return 0; */

	/* int i, j, k;
	i = 3;
	j = 4;
	k = 5;

	printf("%d\n", i % j + i < k);
	return 0; */

	/* int i, j;	
	i = 3;
	j = 4;

	printf("%d\n", !i < j);
	return 0;*/
	
	/* int i, j;	
	i = 2;
	j = 1;

	printf("%d\n", !!i + !j);
	return 0; */

	/* int i, j, k;	
	i = 2;
	j = 1;
	k = 3;

	printf("%d\n", i && j || k);
	return 0; */

	/* int i, j, k;	
	i = 1;
	j = 2;
	k = 3;

	printf("%d\n", i < j || k);
	return 0; */

	/* int i, j, k;	
	i = 3;
	j = 4;
	k = 5;

	printf("%d \n", i < j || ++j < k);
	printf("%d%d%d\n", i, j, k);
	return 0; */

	/* int i, j, k;	
	i = 7;
	j = 8;
	k = 9;

	printf("%d \n", i - 7 && j++ < k);
	printf("%d%d%d\n", i, j, k);
	return 0; */

	/* int i, j, k;	
	i = 7;
	j = 8;
	k = 9;

	printf("%d \n", (i = j) || (j = k));
	printf("%d%d%d\n", i, j, k);
	return 0; */

	int i, j, k;	
	i = 1;
	j = 1;
	k = 1;

	printf("%d \n", ++i || ++j && ++k);
	printf("%d%d%d\n", i, j, k);
	return 0;
}