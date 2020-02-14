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
int i = 1000000;
int started = 0;
int value;
value = n / i;

if (n == 0)
{
_putchar('0');
return;
}
if (n < 0)
{
	_putchar('-');
	n = -n;
}
for (i = 1000000; i > 0; i = i / 10)
{
if (n >= i)
{
	started = 1;
	_putchar('0' + value);
	n = n - (value * i);
}
else if (started)
	_putchar('0');
	
}   
}
