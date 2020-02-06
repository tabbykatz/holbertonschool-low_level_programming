#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;
	if (x > 5)
	{
		printf("The last digit of %d is %d and is greater than 5\n", n, x);
	}
	else if (n == 0)
	{
		printf("The last digit of %d is %d and is %d\n", n, x, 0);
	}
	else
	{
		printf("The last digit of %d is %d and is less than 6 and not 0\n", n, x);
	}
	return (0);
}

