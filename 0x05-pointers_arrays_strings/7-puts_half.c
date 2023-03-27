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
	/* check if the length is even or odd */
	if (len % 2 == 0)
	{
		for (i = len / 2; str[i] != '\0'; i++)
			_putchar(str[i]);
		_putchar('\n');
	}
	else if (len % 2 != 0)
	{
		for (i = (len - 1) / 2; str[i] != '\0'; i++)
			_putchar(str[i]);
		_putchar('\n');
	}
}
