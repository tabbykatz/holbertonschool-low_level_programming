#include "holberton.h"
/**
  *main- a program that prints Holberton
  *
  *Return: zero
  *
  */
int main(void)
{
char Holberton[9] = "Holberton";
int counter;
	for (counter = 0; counter < 10; counter++)
	{
		_putchar(Holberton[counter]);
	}
_putchar('\n');
return (0);
}
