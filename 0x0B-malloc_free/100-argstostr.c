#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - length of a string
 *
 * @str: string
 *
 * Return: length
 */

int _strlen(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
		;
	return (len);
}

/**
 * *argstostr - concatenates all the arguments
 *
 * @ac: int
 * @av: char
 *
 * Return: result
 */

char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, nc = 0, cmpt = 0;
	char *result;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (; i < ac; i++, nc++)
		nc += _strlen(av[i]);

	result = malloc(sizeof(char) * nc + 1);
	if (result == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, cmpt++)
			result[cmpt] = av[i][j];

		result[cmpt] = '\n';
		cmpt++;
	}
	result[cmpt] = '\0';
	return (result);
}
