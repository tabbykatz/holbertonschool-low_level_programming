#include "holberton.h"
/**
  * main- entry point.
  *
  * Return: 0
  */
int main(void)
{
return (0);
}
void print_alphabet(void)
/**
  *print_alphabet is a function that prints the lower alpha
  *
  *Return (void)
  *
  */
{
char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
int x;
	for (x = 0; x < 26; x++)
	{
		_putchar(alphabet[x]);
	}
_putchar('\n');
}
