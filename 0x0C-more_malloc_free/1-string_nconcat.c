#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: int
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, s1_len, s2_len;

	/* check if the strings passed are NULL */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* find the length of the strings */
	for (s1_len = 0; s1[s1_len] != '\0'; s1_len++)
		;
	for (s2_len = 0; s2[s2_len] != '\0'; s2_len++)
		;
	/* memory allocation */
	str = malloc(s1_len + n + 1); /* +1 '\0' */
	if (str == NULL)
		return (NULL);
	/* copy first string into str */
	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	/* copy second string into str */
	for (j = 0; j < n; j++)
	{
		str[i] = s2[j];
		i++; /* to reserve a place for '\0' after */
	}
	str[i] = '\0';
	return (str);
}
