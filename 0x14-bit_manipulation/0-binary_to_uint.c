#include "holberton.h"

/**
 * binary_to_uint - converts binary string to uint
 * @b: string with binary num
 * Return: unsigned int or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num;

	if (!b)
		return (0);

	for (num = 0; *b; b++)
	{
		if (*b == '1')
			num = (num << 1) | 1;
		else if (*b == '0')
			num <<= 1;
		else
			return (0);
	}
	return (num);
}
