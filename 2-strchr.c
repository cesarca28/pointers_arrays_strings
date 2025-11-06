#include "main.h"
#include <stddef.h> /* pour NULL */

/**
 * _strchr - localise un caractère dans une chaîne
 * @s: chaîne à rechercher
 * @c: caractère à trouver
 *
 * Return: pointeur vers la première occurrence de c dans s,
 *         ou NULL si le caractère n'est pas trouvé
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}

	if (c == '\0')
		return (&s[i]);

	return (NULL);
}
