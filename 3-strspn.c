#include "main.h"

/**
 * _strspn - Calculates the length of a prefix substring
 * @s: string to be scanned
 * @accept: string containing the allowed characters
 *
 * Description: Scans the string @s from the beginning and counts
 * how many consecutive characters are found in @accept.
 *
 * Return: the number of consecutive characters at the start of @s
 * that are also present in @accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count;

	count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (accept[j] == '\0')
			return (count);
		count++;
	}
	return (count);
}
