#include "main.h"

/**
 * _puts_recursion - prints a string
 *
 * @s: string
 */

void _puts_recursion(char *s)
{
	/* end */
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
