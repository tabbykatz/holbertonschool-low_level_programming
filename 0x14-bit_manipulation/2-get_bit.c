#include "holberton.h"

/**
 * get_bit - get the vallue of a bit at index
 * @n: the num
 * @index: the index
 * Return: value or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return (n >> index & 1);
}

