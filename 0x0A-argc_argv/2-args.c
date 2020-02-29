#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * main - a program what prints all arguments
  * @argc: the # of args
  * @argv: the names of args
  * Return: 0
  *
  */
int main(int argc, char **argv)
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
