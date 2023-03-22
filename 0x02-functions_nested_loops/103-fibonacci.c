#include "main.h"
#include <stdio.h>

/**
 * main - fibonacci sequence
 *
 * Return: 0
 */

int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, sum, res = 0;
	unsigned long goal = 4000000, count;

	for (count = 0; count < goal; count++)
	{
		sum = fib1 + fib2;
		if (sum % 2 == 0)
			res += sum;

		fib1 = fib2;
		fib2 = sum;
	}
	return (0);
}
