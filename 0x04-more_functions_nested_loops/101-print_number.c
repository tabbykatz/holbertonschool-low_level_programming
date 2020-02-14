#include <stdio.h>
#include "holberton.h"
/**
  * print_number - prints an integer probably a very big one
  * @n: that's the number!
  *
  * Return: void
  */
void print_number(int n)
{
int l = 0;
int last;

if (n < 0)
{
_putchar('-');
n = -n;
}
for (l = 0; l <= n; l++)
{	
	if ( n == 0)
	{
		_putchar('0');
		break;
	}
	else
		_putchar(n % 10);
		last = n % 10;
		n = n - last;
		n = n / 10;
	}
_putchar('\n');
}

