#include "main.h"

/**
* _memcpy - Copies n bytes from memory area src to memory area dest
*@n: number of byte to copie
*@src: source memory area
*@dest: destination memory area
*
*Return: pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	dest[i] = src[i];

	return (dest);

}
