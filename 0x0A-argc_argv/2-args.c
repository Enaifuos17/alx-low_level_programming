#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments it receives
 *
 * @argc: int
 * @argv: array
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
