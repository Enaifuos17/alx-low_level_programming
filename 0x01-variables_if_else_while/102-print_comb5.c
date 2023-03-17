#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 *
 * Return: 0
 */
int main(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			for (c = 0; c <= 9; c++)
			{
				for (d = 1; d <= 9; d++)
				{
					if (a > c || b >= d)
					{
						continue;
					}
					putchar(48 + a);
					putchar(48 + b);
					putchar(' ');
					putchar(48 + c);
					putchar(48 + d);
					if (a + b + c + d != 35)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
