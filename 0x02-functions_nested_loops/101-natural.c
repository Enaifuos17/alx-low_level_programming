#include "main.h"
#include <stdio.h>

/**
 * main - prints natural numbers
 *
 * Return: 0
 */

int main(void)
{
	int res = 0, i;

	for (i = 1; i <= 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			res += i;
		}
	}
	printf("%d\n", res);
	return (0);
}
