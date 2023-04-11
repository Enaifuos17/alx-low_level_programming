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
	int i, len;
	char *copy_str;

	if (str == NULL)
		return (NULL);

	for (len = 0; str[len] != '\0'; len++)
		;

	/* +1 '\0' */
	copy_str = malloc(len * sizeof(copy_str) + 1);

	if (copy_str == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < len; i++)
		{
			copy_str[i] = str[i];
		}
	}
	return (copy_str);
}
