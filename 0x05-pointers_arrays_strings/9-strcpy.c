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
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
return (dest);
}

