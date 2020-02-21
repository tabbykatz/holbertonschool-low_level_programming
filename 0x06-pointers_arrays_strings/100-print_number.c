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
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
		num = n;

	if (num / 10)
		print_number(num / 10);
	_putchar('0' + num % 10);
}
