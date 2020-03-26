#include "holberton.h"

/**
 * clear_bit - sets value of bit at index to 0
 * @n: the num
 * @index: the index
 *
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 8 * sizeof(unsigned long int))
		return (-1);
	if (*n & 1UL << index)
		*n ^= 1UL << index;
	return (1);
}
