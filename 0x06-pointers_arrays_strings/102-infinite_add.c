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
	char answer[] = r;
	int i = 0;
	int value = 0;

	for (; n1[i] || n2[i]; i++)
	{
		value += (n1[i] - '0') + (n2[i] - '0');
	}
	return (answer);
}
