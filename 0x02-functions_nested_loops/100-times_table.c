#include "holberton.h"
#include <stdio.h>
/**
  * print_times_table- prnits the n table
  *@n: the times table to be printed
  *
  * Return: void
  */
void print_times_table(int n)
{
int product;
int x;
int y;

if (n >= 0 && n <= 15)
{
	for (x = 0; x <= n; x++)
	{
		for (y = 0; y <= n; y++)
		{
		product = x * y;
		if (y == 0)
		{
			_putchar(product);
			continue;
		}
		else if (y != 0 && product < 10)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
		}
			if (product > 9 && product < 100)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
		else if (product > 99)
		{
			_putchar(',');
			_putchar(' ');
		}
		if (product < 10)
		{
			_putchar(product);
		}
		else if (product < 100)
		{
			_putchar(product / 10 + '0');
			_putchar(product % 10 + '0');
		}
		else
		{
			_putchar(((product / 10) % 10) / 10);
			_putchar((product / 10) % 10);
			_putchar(product % 10);
		}
		_putchar('\n');
		}
}
}
}
