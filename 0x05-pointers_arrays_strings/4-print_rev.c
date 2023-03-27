#include "main.h"

/**
 * print_rev - prints a string in reverse
 *
 * @s: string parameter
 */

void print_rev(char *s)
{
	int i = 0, j;

	/* get the length of the string */
	while (s[i])
	{
		i++;
	}
	/* start the printing from the end */
	for (j = i; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
