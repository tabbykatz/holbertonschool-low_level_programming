#include "holberton.h"
/**
  * puts_half - printing half a string
  * @str: that's the string
  *
  * Return: void
  */
void puts_half(char *str)
{
	int length = 0;
	char *start = str;

	while (*str)
	{
		length++;
		str++;
	}
	length += 1;
	if (length % 2 == 0)
	{
		while (*start)
		{
			_putchar(*(start + (length / 2)));
			start++;
		}
	}
	else
	{
		while (*start)
		{
			_putchar(*(start + ((length - 1) / 2)));
			start++;
		}
	}
	_putchar('\n');
}
