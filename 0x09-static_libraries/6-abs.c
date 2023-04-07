#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *
 * @x: paramter to be printed
 *
 * Return: 0
 */

int _abs(int x)
{
	if (x < 0)
		x = -(x);
	else
		x = x;
	return (x);
}
