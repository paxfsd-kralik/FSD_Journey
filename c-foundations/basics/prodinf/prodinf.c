/*
Name: prodinf.c
Purpose: Reads product information entered 
Author: Jindra Kralik
*/

#include <stdio.h>

int	main(void)
{
	int		item, day, month, year;
	float	price;

	printf("Enter the item number: ");
	scanf("%d", &item);

	printf("Enter the unit price: ");
	scanf("%f", &price);

	printf("Enter the purchase date: ");
	scanf("%d / %d / %d", &day, &month, &year);
	
	printf("Item\t\tUnit\t\tPurchase\n");
	printf("\t\tPrice\t\tDate\n");
	printf("%d\t\t$%8.2f\t%02d/%02d/%04d\n", item, price, day, month, year);

	return 0;
}