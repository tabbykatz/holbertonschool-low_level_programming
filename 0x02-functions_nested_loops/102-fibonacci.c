#include "holberton.h"
#include <stdio.h>
/**
  *
  *
  *
  *
  */
int main(void)
{
unsigned int a, b, c;
unsigned int i;
int upto;
a = 0;
b = 1;
c = 1;
upto = 50;
for(i = 1; i <= upto; i++)
{

	printf("%d", c);
	a = b;
	b = c;
	c = a + b;
if (i <50)
	printf(", ");
}
printf("\n");
return 0;
}
