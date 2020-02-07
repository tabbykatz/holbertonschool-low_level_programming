#include <stdio.h>
/**
* main- Entry point
*
* Return: Always 0 (Success)
*/
int  main(void)
{
	int x;
	char c;

	for (x = 26; x > 0; x--)
	{
		c = 96 + x;
		putchar(c);
	}

	putchar('\n');
	return (0);
}

