#include "holberton.h"
#include <stdio.h>
/**
  * print_to_98 - prints natural numbers from n to 98
  * @n: that's the input
  *
  * Return: void
  */
void print_to_98(int n)
{
if (n == 98)
{
	printf("%d", n);
}
else if (n > 98)
{
	for (; n >= 98; n--)
	{
	printf("%d", n);
	if (n > 98)
		printf(", ");
	}
}
else
{
	for (; n <= 98; n++)
	{
		printf("%d", n);
		if (n < 98)
			printf(", ");
	}
}
printf("\n");
}
