#include "holberton.h"
/**
  * _atoi - convert string to int
  * @s: the string
  * Return: int
  */
int _atoi(char *s)
{
	int value = 0;
	int j = 0;
	int isnum = 0;
	int sign = 0;

	for (; s[j]; j++)
	{
		if (s[j] == '-')
		{
			if (sign >= 0)
			{
				sign = -1;
				j++;
				break;
			}
			else
			{
				sign = +1;
				j++;
				break;
			}
		}
		else if (s[j] == '+')
		{	if (sign >= 0)
			{
				sign = +1;
				j++;
				break;
			}
			else 
			{
				sign = -1;
				j++;
				break;
			}
		}
		else if (s[j] >= '0' && s[j] <= '9')
		{
			if (sign < 1)
			{
				isnum = 1;
				value *= 10;
				value += -(s[j] - '0');
				continue;
			}
			else
			{
				isnum = 1;
				value *= 10;
				value += s[j] - '0';
				continue;
			}
		}
		else if (isnum)
		{
			j++;
			break;
		}
	}
	return (value);
}
