#include "holberton.h"

/**
 * flip_bits - count how many bits must be flipped
 * @n: one num
 * @m: the other num
 * Return: count
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = n ^ m;
	int count = 0;

	while (i)
	{
		count += i & 1;
		i >>= 1;
	}
	return (count);
}
