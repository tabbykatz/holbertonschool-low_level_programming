#include "holberton.h"
#include <stdio.h>
/**
  * main - fibbonacci
  *
  *
  * Return: 0
  */
int main(void)
{
long int a, b, c;
long int i;
int upto;
a = 0;
b = 1;
c = 1;
upto = 50;
for (i = 1; i <= upto; i++)
{

	printf("%li", c);
	a = b;
	b = c;
	c = a + b;
if (i < 50)
	printf(", ");
}
printf("\n");
return (0);
}
