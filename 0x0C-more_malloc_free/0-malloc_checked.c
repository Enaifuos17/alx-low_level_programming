#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked - allocates memory using malloc
 * @b: int
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	int *answer = malloc(b);

	if (answer == 0)
		exit(98);
	return (answer);
}
