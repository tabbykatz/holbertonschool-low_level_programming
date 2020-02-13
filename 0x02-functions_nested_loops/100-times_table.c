#include "holberton.h"
#include <stdio.h>
/**
  * print_times_table(int n) - prnits the n table
  *@n: the times table to be printed
  *
  * Return: void
  */
void print_times_table(int n)
{
int product;
int x;
int y;
	
if (n != 0 && n <= 15)
{
	for (x = 0; x <= n; x++)
	{	
		for (y = 0; y <= n; y++)
		{
		product = x * y;
		if (y == 0)
		{
			printf("%d", product);
			continue;
		}
		else if (y != 0 && product < 10)
		{
			printf(",   ");
		}
			if (product > 9 && product < 100)
		{
			printf(",  ");
		}
		else
		{
			printf(", ");
		}
		printf("%d", product);
		}
	printf("\n");
	}
}
}
	


