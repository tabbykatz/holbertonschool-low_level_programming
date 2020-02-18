#include "holberton.h"
/**
  * *_strcpy - copies the string pointed
  *to by src, including the terminating null byte
  *to the buffer pointed to by dest
  * @dest: points to buffer
  * @src: poits to string
  *
  * Return: pointer
  */
char *_strcpy(char *dest, char *src)
{
	char *answer = dest;
	int i = 0;

	for (; *src; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}
	dest[i] = '\0';
return (answer);
}

