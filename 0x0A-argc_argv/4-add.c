#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
/**
  * main - a program what adds positive #s
  * @argc: the number of args
  * @argv: the contents of args
  *
  * Return: 0 or 1
  *
  */
int main(int argc, char **argv)
{
	int sum = 0;
	int i = 1;

	if (argc < 3)
	{
		printf("0\n");
		return (0);
	}
	for (; i < argc; i++)
	{
		if (*argv[i] < '0' || *argv[i] > '9')
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
