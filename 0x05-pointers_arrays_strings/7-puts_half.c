#include "main.h"

/**
 * puts_half - prints the half of a string
 *
 * @str: parameter
 */

void puts_half(char *str)
{
	int len = 0;
	int i;

	/* get the length */
	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	/* start from the half */
	for (i = len / 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
