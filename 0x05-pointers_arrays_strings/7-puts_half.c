#include "main.h"

/**
 * puts_half - prints the half of a string
 *
 * @str: parameter
 */

void puts_half(char *str)
{
	int len = 0;
	int i, start;

	/* length */
	for (i = 0; str[i] != '\0'; i++)
		len++;

	start = len / 2;

	if (len % 2 == 1)
		start = ((len + 1) / 2);

	for (i = start; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
