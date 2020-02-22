#include "holberton.h"
/**
  * infinite_add - add two numbers
  * @n1: first number
  * @n2: second number
  * @r: the buffer
  * @size_r: the size of r
  * Return: char
  */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{

	int x = 0;
	int i = 0;
	int j = 0;
	int count = 0;
	int digit = 0;
	unsigned int digitval;
	unsigned int value1 = 0;
	unsigned int value2 = 0;
	unsigned int value3 = 0;
	char *p = r;

	while (r[x + 1])
	{
		r++;
		x++;
	}
	while (n1[i + 1])
	{
		n1++;
		i++;
	}
	while (i)
	{
		value1 += n1[i] - '0';
		i--;
	}
	while (n2[j + 1])
	{
		n2++;
		j++;
	}
	while (j)
	{
		value2 += n2[j - '0'];
		j--;
	}
	value3 = value1 + value2;
	digitval = value3;
	while (digitval / 10)
	{
		count += 1;
		digitval /= 10;
	}
	count += 1;
	if (count > size_r)
		return (0);
	for (; size_r; size_r--)
	{
		digit = (value3 % 10);
		value3 = (value3 - digit);
		r[x] = digit + '0';
		x--;
	}
	return (p);
}
