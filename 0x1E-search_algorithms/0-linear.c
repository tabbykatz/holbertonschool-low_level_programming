#include "search_algos.h"
/**
 * linear_search- look for avlue sequentially
 * @array: the array of values
 * @size: size of array
 * @value: what we are searching for
 * Return: index found at or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index = 0;

	if (!array)
		return (-1);
	while (index < size)
	{
		printf("Value checked array[%d] = [%d]\n", (int)index, (int)array[index]);
		if (value == array[index])
			return (index);
		index++;
	}
	return (-1);
}
