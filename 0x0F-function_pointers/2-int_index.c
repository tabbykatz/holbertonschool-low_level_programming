#include "function_pointers.h"

/**
 * int_index - a function that searches for an int
 * @array: the arr
 * @size: size of arr
 * @cmp: points to comp function
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	/* declarations */
	int i;

	/* checking input */
	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	/* moving through array looking for int */
	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]))
			return (i);
	}
	return (-1);
}
