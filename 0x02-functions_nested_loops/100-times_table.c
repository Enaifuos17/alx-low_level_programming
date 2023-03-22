#include "main.h"

/**
 * print_times_table - prints the n times table
 *
 * @n: parameter to be printed
 *
 * Return: 0
 */

void print_times_table(int n)
{
	int i, j, res, lastTwo;

	if (n > 15 || n < 0)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			res = i * j;
			if (res > 9 && res <= 99)
			{
				_putchar(' ');
				_putchar(res / 10 + '0'); /* first digit */
				_putchar(res % 10 + '0'); /* second digit */
			}
			else if (res > 99)
			{
				_putchar(res / 100 + '0'); /* first digit of the number */
				lastTwo = res % 100; /* last twoDigits of the number */
				_putchar(lastTwo / 10 + '0'); /* 1st digit of lastTwo */
				_putchar(lastTwo % 10 + '0'); /* 2nd digit of lastTwo */
			}
			else if (j != 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(res + '0');
			}
			else
				_putchar(res + '0');

			if (j != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
