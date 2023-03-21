#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @num: paramter to be printed
 *
 * Return: 0
 */

int print_last_digit(int num)
{
	int last_digit;

	if (num < 0)
	{
		num = -(num);
	}

	last_digit = num % 10;
	_putchar(last_digit + '0');
	return (last_digit);
}
