/*
Name: vowelcount.c
Purpose: The user inputs a sentence and the program counts the vowels in it. The program prints it to the standard output 
Author: Jindra Kralik
*/

#include <stdio.h>

int	main(void)
{
	int		counter = 0;
	char	vowel;

	printf("Enter a sentence: ");
	while (vowel != '\n')
	{
		vowel = getchar();
		if (vowel == 'a' || vowel == 'e' || vowel == 'i' || vowel == 'o' || vowel == 'u'
			||  vowel == 'A' || vowel == 'E' || vowel == 'I' || vowel == 'O' || vowel == 'U')
		counter += 1;		
	}
	printf("Your sentence contains %i vowels\n", counter);
	return 0;
}