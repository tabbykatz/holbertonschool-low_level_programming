#include "holberton.h"
/**
  *main- entry point
  *
  *Return: 0
  *
  */
int main(void)
{
	return (0);
}
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
	x++;
	}
_putchar('\n');
}
