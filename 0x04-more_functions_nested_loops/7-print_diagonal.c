#include "holberton.h"
/**
  * print_diagonal - draws a diagonal line
  * @n: that's the length of the line
  *
  * Return: void
  */
void print_diagonal(int n)
{
int x;
int y;

if (n > 0)
{
	for (x = 0; x < n; x++)
	{
		for (y = 0; y < x; y++)
		{
			_putchar(' ');
		}
	_putchar(92);
	_putchar('\n');
	}
}
else
	_putchar('\n');
}

