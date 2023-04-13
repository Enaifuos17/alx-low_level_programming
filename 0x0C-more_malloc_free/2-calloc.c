#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_memset - fill memory with a constatn byte
 * @s: string
 * @b: char
 * @n: int
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}

/**
 * *_calloc - allocates memory for an array using malloc
 * @nmemb: n of elements
 * @size: size of array
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *res;

	if (nmemb == 0 || size == 0)
		return (NULL);
	res = malloc(size * nmemb);
	if (res == NULL)
		return (NULL);
	_memset(res, 0, size * nmemb);
	return (res);
}
