#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 *
 * @s1: string one
 * @s2: string two
 *
 * Return: concatenation of the two strings
 */

char *str_concat(char *s1, char *s2)
{
	char *answer;
	int len_s1, len_s2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len_s1 = 0; s1[len_s1] != '\0'; len_s1++)
		;
	for (len_s2 = 0; s2[len_s2] != '\0'; len_s2++)
		;

	answer = malloc((len_s1 * sizeof(s1)) + (len_s2 * sizeof(s2)));
	if (answer == NULL)
		return (NULL);

	for (i = 0, j = 0; i < (len_s1 + len_s2 + 1); i++)
	{
		if (i < len_s1)
		{
			answer[i] = s1[i];
		}
		else
		{
			answer[i] = s2[j++];
		}
	}
	return (answer);
}
