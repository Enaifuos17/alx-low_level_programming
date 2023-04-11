#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - length of a string
 *
 * @s: string
 *
 * Return: length
 */

int _strlen(char *str)
{
	int length;

	for (length = 0; str[length] != '\0'; length++)
		;
	return (length);
}

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
	int len_s1, len_s2;
	int i;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	len_s1 = _strlen(s1);
	len_s2 = _strlen(s2);
	answer = malloc((len_s1 + len_s2) * sizeof(char) + 1);
	if (answer == 0)
		return (0);

	for (i = 0; i <= len_s1 + len_s2; i++)
	{
		if (i < len_s1)
			answer[i] = s1[i];
		else
			answer[i] = s2[i - len_s1];
	}
	answer[i] = '\0';
	return (answer);
}
