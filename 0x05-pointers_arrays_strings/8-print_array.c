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
	int *ptr1 = a;
	int *ptr2 = a;
	int original_n = n;

	while (n - 1)
	{
		ptr2++;
		n--;
	}
	while (ptr1 <= ptr2)
	{
		while (original_n--)
		{
			if (ptr1 < ptr2)
			{
				printf("%d, ", *ptr1);
				ptr1++;
			}
			else
			{
				printf("%d", *ptr1);
				ptr1++;
			}
		}
	}
}
