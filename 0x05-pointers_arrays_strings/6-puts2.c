#include "holberton.h"
/**
  * puts2 - prints every other char of a string
  * @str: that's the string
  *
  * Return: void
  */
void puts2(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
		if (*str)
		str++;
	}
	_putchar('\n');
}
