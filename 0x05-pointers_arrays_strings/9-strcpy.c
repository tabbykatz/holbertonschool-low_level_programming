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

	for (; *src; )
	{
		*dest = *src;
		dest++;
		src++;
	}
	dest++;
	*dest = '\0';
return (answer);
}

