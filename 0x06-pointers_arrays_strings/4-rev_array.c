#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a: array
 * @n: number of elements of the array
 *
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n--; i++)
	{
		/* stock the first char of arr in tmp */
		tmp = a[i];
		/* swapp the 1st value with the last value */
		a[i] = a[n];
		/* swapp the last value with 1st (which ic stock in tmp) */
		a[n] = tmp;
	}
}
