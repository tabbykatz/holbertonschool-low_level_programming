#include "holberton.h"

/**
 * set_bit - sets the value of a bit at index to 1
 * @n: the num in array
 * @index: where to set the value
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 8 * sizeof(unsigned long int))
		return (-1);
	*n |= (1 << index);
	return (1);
}
