#include "main.h"

/**
 * more_numbers - prints 10 times the numbers (0 to 14)
 *
 * Return: 0
 */

void more_numbers(void)
{
	int i, num;

	for (i = 0; i < 10; i++)
	{
		for (num = 0; num <= 15; num++)
		{
			if (num >= 10)
			{
				_putchar(1 + '0');
			}
			_putchar(num % 10 + '0');
		}
		_putchar('\n');
	}
}
