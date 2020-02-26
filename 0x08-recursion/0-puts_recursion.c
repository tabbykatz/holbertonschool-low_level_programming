#include "holberton.h"
/**
 * _puts_recursion - prints a string followed by a newline
 * @s: the string we print
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (!*s)
		return;
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
		if (*(s + 1) == '\0')
			_putchar('\n');
	}
}
