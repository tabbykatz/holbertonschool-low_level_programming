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

	for (x = 0; x < 26; x++)
	{
		c = 97 + x;
		putchar(c);
	}
	for (x = 0; x < 26; x++)
	{
		c = 65 + x;
		putchar(c);
	}
	putchar('\n');
	return (0);
}

