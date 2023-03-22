#include "main.h"
#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	int goal = 50, count;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (coun = 0; count < goal; count++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
