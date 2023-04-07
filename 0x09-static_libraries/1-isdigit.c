#include "main.h"

/**
 * _isdigit - check for a digit (0 to 9)
 *
 * @c: parameter to be printed
 *
 * Return: 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
