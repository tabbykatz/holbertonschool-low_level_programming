#include "holberton.h"
/**
 * _print_rev_recursion - print a string in reverse
 * @s: the string
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (!*s)
		return;
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
