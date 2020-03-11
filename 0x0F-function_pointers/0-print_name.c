#include "function_pointers.h"

/**
 * print_name - a function that prints a name
 * @name: the pointer to name
 * @f: points to function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (*f == NULL)
		return;
	(*f)(name);
}
