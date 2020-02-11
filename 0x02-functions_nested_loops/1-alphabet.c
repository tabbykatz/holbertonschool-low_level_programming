#include "holberton.h"
/**
  * print_alphabet - prints the lowercase alphabet
  *
  * Return- void
  */
void print_alphabet(void)
{
char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
int x;
	for (x = 0; x < 26; x++)
	{
		_putchar(alphabet[x]);
	}
_putchar('\n');
}

