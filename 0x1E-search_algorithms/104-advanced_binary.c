#include "search_algos.h"
/**
 * advanced_binary - searches for a value in an array of
 * integers using the Binary search algorithm
 * @array: array to search
 * @size: len of array
 * @value: value we look for
 * Return: index of value or -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	/* declarations */
	int mid, retval;

	/* check for null array */
	if (!array || size == 0)
		return (-1);

	print_it(array, 0, size - 1);

	/* checking that first val */
	if (size == 1 && array[0] != value)
		return (-1);

	/* set up binary pivot */
	mid = (size - 1) / 2;
	if (array[mid] < value)
	{
		retval = advanced_binary(array + mid + 1, size / 2, value);
		/* if retval is -1, it's not really in this case */
		return (retval == -1 ? -1 : retval + mid + 1);
	}
	else if (array[mid] > value)
		return (advanced_binary(array, size / 2 - 1, value));
	else if (mid != 0)
		return (advanced_binary(array, (size % 2 ? (size + 1)
						/ 2 : size / 2), value));
	else if (array[mid] == value)
		return (mid);

	return (-1);
}
/**
 * print_it - to print the array we are searching
 * @arr: ptr to first element the array
 * @begin: [0] element
 * @end: last element to print
 */
void print_it(int *arr, int begin, int end)
{
	printf("Searching in array: ");
	for (; begin <= end; begin++)
	{
		if (begin == end)
			printf("%d\n", arr[begin]);
		else
			printf("%d, ", arr[begin]);
	}
}
