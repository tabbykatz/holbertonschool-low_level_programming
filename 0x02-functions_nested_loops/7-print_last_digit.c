#include "holberton.h"
/**
  * print_last_digit - returns last digit
  * @d: that's the number
  *
  * Return: last digit
  */
int print_last_digit(int d)

{
	int digit = d % 10;

	if (digit < 0)
	{
		digit = digit * (-1);
	}
return (digit);
}

