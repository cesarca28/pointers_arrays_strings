#include "main.h"
#include <stddef.h>  /* for NULL */

/**
 * _strstr - Locates a substring in a string
 * @haystack: string to be scanned
 * @needle: substring to search for
 *
 * Return: pointer to the beginning of the located substring in haystack,
 * or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	if (needle[0] == '\0')
		return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (needle[j] == '\0')
			return (&haystack[i]);
	}

	return (NULL);
}
