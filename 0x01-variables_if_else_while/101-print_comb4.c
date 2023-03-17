#include <stdio.h>

/**
 * main - prints all possible different combinations of 3 digits
 *
 * Return: 0
 */
int main(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a <= 8; a++)
	{
		for (b = 1; b <= 8; b++)
		{
			for (c = 1; c <= 9; c++)
			{
				if (b == c || b > c || a >= b)
				{
					continue;
				}
				putchar(48 + a);
				putchar(48 + b);
				putchar(48 + c);
				if (a != 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
