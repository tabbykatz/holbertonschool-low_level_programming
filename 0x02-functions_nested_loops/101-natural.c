#include <stdio.h>
#include <stdlib.h>
/**
  * main - finds and prints multiples of 3 or 5 under 1024
  *
  * Return: void
  *
  *
  */
int main(void)
{
	/* declarations */
	int i;
	int sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
