#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: pointer to char
 */
void print_rev(char *s)
{
	int len = 0;
	char *end = s;

	while (*end != '\0')
	{
		len++;
		end++;
	}
	end--;
	while (len > 0)
	{
		_putchar(*end);
		end--;
		len--;
	}
	_putchar('\n');
}
