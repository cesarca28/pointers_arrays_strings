#include "main.h"

/**
 * _strncat - appends at most n bytes from src to dest
 * @dest: destination string
 * @src: source string
 * @n: maximum number of bytes to append
 *
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;
	int i = 0;

	while (*ptr != '\0')
		ptr++;

	while (i < n && *src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
		i++;
	}

	*ptr = '\0';

	return (dest);
}
