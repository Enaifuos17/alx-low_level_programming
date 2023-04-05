#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root
 *
 * @n: number
 * @val: value
 *
 * Return: square root
 */

int square(int n, int val);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - func that well use for sqaure root calc
 *
 * @n: number
 * @val: value
 *
 * Return: int
 */
int square(int n, int val)
{
	if (val * val == n)
	{
		return (val);
	}
	else if (val * val < n)
	{
		/* Recursion */
		return (square(n, val + 1));
	}
	else
	{
		return (-1);
	}
}
