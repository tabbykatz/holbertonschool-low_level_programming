#include "holberton.h"
#include <stdio.h>
/**
  * print_array- printing n of an array
  * @a: that's our array
  * @n: this is the #
  * Return: void
  */
void print_array(int *a, int n)
{
	int i = 0;
	int *begin = a;

	if (n > 0)
	{
		for (; *a; a++)
		{
			if (i < n - 1)
			{
				printf("%d, ", begin[i]);
				i++;
			}
		}
		printf("%d", begin[i]);
		printf("\n");
	}
}
