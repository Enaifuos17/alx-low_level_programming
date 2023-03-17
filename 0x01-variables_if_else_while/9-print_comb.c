#include <stdio.h>

/**
 * main - print numers separeted by comma using only putchar
 *
 * Return: 0
 */
int main(void)
{
	int i;
	char comma = ',';

	for (i = 0; i <= 9; i++)
	{
		if (i == 9)
		{
			putchar(48 + i);
			break;
		}
		putchar(48 + i);
		putchar(comma);
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
