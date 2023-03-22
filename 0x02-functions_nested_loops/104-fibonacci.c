#include "main.h"
#include <stdio.h>

/**
 * numLength - return the length of a number
 *
 * @num: paramater to be printed
 *
 * Return: 0
 */
int numLength(int num)
{
	int length = 0;

	if (!num)
		return (1);

	while (num)
	{
		num = num / 10;
		length += 1;
	}
	return (length);
}

/**
 * main - prints the first 98 fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
	int count, initial;
	unsigned long fib1 = 1, fib2 = 2, sum, mx = 1000000000;
	unsigned long fib1_2 = 0, fib2_2 = 0, sum2 = 0;

	for (count = 1; count <= 98; count++)
	{
		if (fib1_2 > 0)
			printf("%lu", fib1_2);
		initial = numLength(mx) - 1 - numLength(fib1);

		while (fib1_2 > 0 && initial > 0)
		{
			printf("%d", 0);
			initial--;
		}
		printf("%lu%", fib1);

		sum = (fib1 + fib2) % mx;
		sum_2 = fib1_2 + fib2_2 + (fib1 + fib2) / mx;
		fib1 = fib2;
		fib1_2 = fib2_2;
		fib2 = sum;
		fib2_2 = sum_2;

		if (count != 98)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}
