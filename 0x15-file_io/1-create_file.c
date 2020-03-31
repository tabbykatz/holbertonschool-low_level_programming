#include "holberton.h"
/**
  * _strlen - get len of str
  * @s: the str
  *
  *
  * Return: length
  */
int _strlen(char *s)
{
	int len;

	for (len = 0; s[len]; len++)
	{}
	return (len);
}
/**
 * create_file - a function that creates a file
 * @filename: the name of the file to be created
 * @text_content: the text what goes into the newborn file
 * Return: 1 on success, -1 on fail
 */
int create_file(const char *filename, char *text_content)
{
	int len;
	int fd, writeVal;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	len = _strlen(text_content);
	writeVal = write(fd, text_content, len);
	if (writeVal < 0 || writeVal != len)
		return (-1);
	return (1);
}
