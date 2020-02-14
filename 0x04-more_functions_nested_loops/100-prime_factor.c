#include <stdio.h>
#include <math.h>
/**
* main - a program to find the largest prime factor of 612852475143
*
*
* Return: 0
*/
int main(void)
{
long int number = 612852475143;
int i;
int max = -1;
while (number % 2 == 0)
{
max = 2;
number = number / 2;
}
for (i = 3; i <= sqrt(612852475143); i = i + 2)
{
while (number % i == 0)
{
max = i;
number = number / i;
}
}
if (number > 2)
{
max = number;
}
printf("%d\n", max);
return (0);
}
