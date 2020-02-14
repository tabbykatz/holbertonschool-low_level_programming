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
	printf("the value of l is %d\n", l);
	
	if ( n == 0)
	{
		_putchar('0');
		break;
		printf("this is the zero if\n");
	}
	else
		for (l = 0)
		_putchar(n % 10);
		last = n % 10;
		printf("The value of last is %d\n", last);
		n = n - last;
		printf("The value of n is %d\n", n);
		n = n / 10;
		printf("Now the value of n is %d\n", n);
	}
_putchar('\n');
}

