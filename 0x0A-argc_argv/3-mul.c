#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 *
 * @argc: int
 * @argv: array
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int sum;

	/* argc = 3 MEANS we have two arguments (plus the program name) */
	if (argc == 3)
	{
		/* atoi() --> string to int */
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
