#include <stdio.h>
/**
  *main- print all combinations from 0-99
  *
  *Return: 0
  */
int main(void)
{
	int i;

	for (i = 0; i < 100; i++)
	{
		putchar(i / 10 + '0');
		putchar(i % 10 + '0');
		putchar(' ');
	}
		putchar('\n');
return (0);
}
