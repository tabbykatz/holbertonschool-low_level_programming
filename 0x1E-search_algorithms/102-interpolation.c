#include "search_algos.h"
/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using the Interpolation search algorithm
 * @array: the array of ints we search
 * @size: len of array
 * @value: what we are looking for
 * Return: index of value or -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	/* declarations */
	size_t low, high, pos;

	if (!array)
		return (-1);
	low = 0;
	high = size - 1;
	while (low <= high && value >= array[low] && value <= array[high])
	{
		if (low == high)
		{
			if (array[low] == value)
				printf("Value checked array[%d] = [%d]\n", (int) low, array[low]);
				return (low);
			return (-1);
		}
		pos = low + (((double) (high - low) /
					(array[high] - array[low])) * (value - array[low]));
		if (array[pos] == value)
		{
			printf("Value checked array[%d] = [%d]\n", (int) pos, array[pos]);
			return (pos);
		}
		if (array[pos] < value)
		{
			printf("Value checked array[%d] = [%d]\n", (int) pos, array[pos]);
			low = pos + 1;
		}
		else
			high = pos - 1;
	}
	printf("Value checked array[%d] is out of range\n", (int) value);
	return (-1);
}
