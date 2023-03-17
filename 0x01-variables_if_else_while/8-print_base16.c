#include <stdio.h>

/**
 * main - prints all the numbers of base 16
 *
 * Return: 0
 */
int main(void)
{
	int i;
	char j;

	for (i = 0; i <= 9; i++)
	{
		putchar(48 + i);
	}
	for (j = 'a'; j <= 'f'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
