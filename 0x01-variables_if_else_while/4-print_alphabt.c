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
{
	for (x = 0; x < 26; x++)
	{
		if (x == 4 || x == 16)
		{
		}
		else
		{
			c = 97 + x;
			putchar(c);
		}
	}
}
	putchar('\n');
	return (0);
}

