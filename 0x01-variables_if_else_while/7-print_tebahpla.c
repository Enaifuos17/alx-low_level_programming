#include <stdio.h>

/**
 * main - prints alphabet in reverse
 *
 * Return: 0
 */
int main(void)
{
	char alph[30] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 25; i >= 0; i--)
	{
		putchar(alph[i]);
	}
	putchar('\n');
	return (0);
}
