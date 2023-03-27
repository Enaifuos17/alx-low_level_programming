#include "main.h"

/**
 * print_rev - prints a string in reverse
 *
 * @s: string parameter
 */

void print_rev(char *s)
{
	int i = 0;

	/* get the length of the string */
	while (s[i])
	{
		i++;
	}
	/* start the printing from the end */
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
