#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid -returns a pointer to a 2D array of ints
 * @width: width
 * @height: height
 * Return: pointer to array
 */
int **alloc_grid(int width, int height)
{
	int x;
	int y;
	int i;
	int **arr = (int **)malloc(width * sizeof(int *));

	for (i = 0; i < width; i++)
	{
		arr[i] = (int *)malloc(height * sizeof(int));
	}
	if (width < 1 || height < 1)
		return (NULL);
	for (x = 0; x < width; x++)
	{
		for (y = 0; y < height; y++)
		{
			arr[x][y] = 0;
		}
	}
	return (arr);
}
