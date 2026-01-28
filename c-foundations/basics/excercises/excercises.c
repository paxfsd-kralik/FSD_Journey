/*
Name: excercises.c
Purpose: confirm the result of King's book excercises 
Author: Jindra Kralik
*/

#include <stdio.h>
#include <unistd.h>

int	main(void)
{
/* 	int	i;
	for (i = 10; i >= 1; i /= 2)
	{
		printf("*%d\n", i);
		printf("%d", i++);
		fflush(stdout);
		sleep(1);
	}
	return 0; */

	/* int	i = 10;

	while (i >= 1)
	{
		printf("*%d\n", i);
		printf("%d", i++);
		fflush(stdout);
		sleep(1);
		i /= 2;
	}
	return 0; */

	int	sum = 0, i;

	for (i = 0; i < 10; i++)
	{
		if(i % 2)
			continue;
		sum += i;
	}
	printf("%d\n", sum);
	return 0;
}