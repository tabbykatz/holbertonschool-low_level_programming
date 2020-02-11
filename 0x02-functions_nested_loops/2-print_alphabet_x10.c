#include "holberton.h"
/**
  * print_alphabet_x10- prints the alphabet 10x
  *
  * Return ()
  *
  */
void print_alphabet_x10(void)
{
char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
int counter;
int x;

	while (x < 10)
	{
		for (counter = 0; counter < 26; counter++)

		{
			_putchar(alphabet[counter]);
		}
	_putchar('\n');
	x++;
	}
}
