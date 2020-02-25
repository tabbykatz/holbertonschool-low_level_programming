#include "holberton.h"
/**
  * print_chessboard - prints the chessboard
  * @a: the chessboard
  *
  *
  *
  * Return: void
  */
void print_chessboard(char (*a)[8])
{
	int x;
	int y;

	for (x = 0; x < 8; x++)
	{
		for (y = 0; y < 8; y++)
		{
			_putchar(a[x][y]);
		}
		_putchar('\n');
	}
}
