#include "holberton.h"
#include <stdio.h>
/**
* main - prints sum of even fibonacci nums
*
*
* Return: void
*
*/
int main(void)
{
	/*declarations */
	unsigned long int sum = 0;
	unsigned long int f1 = 0;
	unsigned long int f2 = 1;
	/* looping up to 4,000,000 */
	while (f2 < 4000000)
	{
		if (f2 % 2 == 0)
		{
			sum += f2;
		}
		f1 = f2;
		f2 = f1 + f2;
	}
	printf("%lu\n", sum);
	return (0);
}
