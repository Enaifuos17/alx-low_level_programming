#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - copy of the string given as a parameter
 *
 * @str: string given
 *
 * Return: copy of the string given
 */

char *_strdup(char *str)
{
	int i, j, len = 0;
	char *copy_str;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		len += 1;

	copy_str = malloc(len * sizeof(copy_str) + 1); /* +1 '\0' */
	if (copy_str == NULL)
		return (NULL);

	for (j = 0; j < len; j++)
		copy_str[j] = str[j];
	copy_str[j] = '\0';

	return (copy_str);
}
