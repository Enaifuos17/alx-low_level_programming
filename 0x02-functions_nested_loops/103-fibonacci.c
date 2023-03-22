#include "main.h"
#include <stdio.h>

/**
 * main - fibonacci sequence
 *
 * Return: 0
 */

int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, sum;
	unsigned long goal = 4000000, count;
	float res;

	while (1)
	{
		sum = fib1 + fib2;

		if (sum > goal)
			break;

		if ((sum % 2) == 2)
			res += sum;

		fib1 = fib2;
		fib2 = sum;
	}
	printf("%0.f\n", res);
	return (0);
}
