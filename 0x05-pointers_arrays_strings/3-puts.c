#include "holberton.h"
/**
  * _puts - prints a string to standard output
  * @str: is the string
  *
  * Return: is void
  */
void _puts(char *str)
{
while (*str != 0)
{
_putchar(*str);
&*str++;
}
_putchar('\n');
}
