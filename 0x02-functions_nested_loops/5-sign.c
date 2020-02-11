#include "holberton.h"
/**
  * print_sign - a function to determine sign of a number
  * @n: that's the number
  *
  * Return: 1 if positive, 0 if zero, -1 if neg
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
