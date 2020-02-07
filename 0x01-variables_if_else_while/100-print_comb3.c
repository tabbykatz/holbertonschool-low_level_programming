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
		if (i / 10 < i % 10)
		{
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			if (i < 89)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
