#include "search_algos.h"
/**
 * binary_search- searches for a value in a sorted array of integers using the
 * Binary search algorithm
 * @array: the array to search
 * @size: len of array
 * @value: what we search for
 *  Return: the index at which value is found or -1
 */
int binary_search(int *array, size_t size, int value)
{
	/* declarations */
	int high, low, mid;

	high = (int)size - 1;
	low = 0;

	/* check for null array */
	if (!array)
		return (-1);

	while (low <= high)
	{
		print_it(array, low, high);
		mid = (low + high) / 2;
		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
		else
			return (mid);
	}

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
