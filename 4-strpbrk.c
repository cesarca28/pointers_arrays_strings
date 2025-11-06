#include "main.h"

#include "main.h"
#include <stddef.h>  /* for NULL */

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: string to be scanned
 * @accept: string containing the bytes to search for
 *
 * Description: Scans the string @s for the first occurrence of any character
 * present in @accept.
 *
 * Return: pointer to the first matching byte in s, or NULL if none
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}
	return (NULL);
}
