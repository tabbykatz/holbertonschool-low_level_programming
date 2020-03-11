#include "function_pointers.h"

/**
 * array_iterator - executes a function on each element of arr
 * @array: the arr
 * @size: size of array?
 * @action: the function to execute
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	/* declarations */
	size_t i;

	/* checking for NULL */
	if (array == NULL || action == NULL)
		return;
	/* moving through the array */
	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
