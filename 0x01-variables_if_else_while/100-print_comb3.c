#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Return: 0
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 8; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (i == j || i > j)
			{
				continue;
			}
			putchar(48 + i);
			putchar(48 + j);
			if (i != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
