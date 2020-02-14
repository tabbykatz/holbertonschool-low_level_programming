#include "holberton.h"
#include <stdio.h>
/**
  * print_number - we're printing some serious numbers
  * @n: that's the number, fear it.
  *
  * Return: void
  */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
		if (n / 10)
	{
		print_number(n / 10);
		_putchar('0' + n % 10);
	}
}

