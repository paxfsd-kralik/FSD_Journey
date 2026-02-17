/*
Name: addfrac.c
Purpose: Adds two fractions and allows the user to add spaces before and after each / symbol
Author: Jindra Kralik
*/

#include <stdio.h>

int	gcd(int a, int b);

int gcd(int a, int b)
{
	int mod;

	while (b != 0)
	{
		mod = a % b;
		a = b;
		b = mod;
	}
	return a;
}

int	main(void)
{
	int 	num1, denom1, num2, denom2;
	int		result_num, result_denom;
	int		divisor;
	char	operand;

	printf("Enter the first fraction: ");
	scanf("%d / %d", &num1, &denom1);

	printf("Enter the arithmetic operation (+-*/): ");
	scanf(" %c", &operand);

	printf("Enter the second fraction: ");
	scanf("%d / %d", &num2, &denom2);

	if (denom1 == 0 || denom2 == 0)
	{
		printf("Denominator cannot be zero.\n");
		return 1;
	}

	switch (operand)
	{
	case '+':
		result_num = num1 * denom2 + num2 * denom1;
		result_denom = denom1 * denom2;
		break;
	case '-':
		result_num = num1 * denom2 - num2 * denom1;
		result_denom = denom1 * denom2;
		break;
	case '*':
		result_num = num1 * num2;
		result_denom = denom1 * denom2;
		break;
	case '/':
		if (num2 == 0)
		{
			printf("Cannot divide by zero.\n");
			return 1;
		}	
		result_num = num1 * denom2;
		result_denom = num2 * denom1;
		break;
	default:
		printf("Invalifd .\n");
		break;
	}

	divisor = gcd(result_num, result_denom);
	result_num /= divisor;
	result_denom /= divisor;

	printf("The result is %d/%d\n", result_num, result_denom);
	return 0;
}