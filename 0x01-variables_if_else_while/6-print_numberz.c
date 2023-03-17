#include <stdio.h>
#include <string.h>

/**
 * main - prints numbers using only putchar
 *
 * Return: 0
 */
int main(void)
{
	char nums[20] = "0123456789";
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(nums[i]);
	}
	putchar('\n');
	return (0);
}
