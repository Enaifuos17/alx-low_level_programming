#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - func that creates an array of chars
 * and initializes it with a specific char
 *
 * @size: size of array
 * @c: char
 *
 * Return: the array
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = malloc(size * sizeof(char));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
