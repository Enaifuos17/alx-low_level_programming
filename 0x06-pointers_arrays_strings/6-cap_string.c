#include "main.h"

/**
 * isThereSeparators - check if the char if one of the separators
 *
 * @c: character parameter
 *
 * Return: check
 */

int isThereSeparators(char c)
{
	int i, check = 0;
	char separators[] = " \t\n,;.!?\"(){}";

	/* 13 is the length of separators */
	for (i = 0; i < 13; i++)
	{
		if (c == separators[i])
			check = 1;
	}
	return (check);
}

/**
 * *cap_string - capitalizes all words of a string
 *
 * @str: string parameter
 *
 * Return: string
 */

char *cap_string(char *str)
{
	int i;

	/* check the first char of the string */
	if (str[0] >= 97 && str[0] <= 122)
	{
		str[0] -= 32;
	}
	/* loop into str */
	for (i = 1; str[i] != '\0'; i++)
	{
		if (isThereSeparators(str[i - 1]))
		{
			if (str[i] >= 97 && str[i] <= 122)
			{
				str[i] -= 32;
			}
		}
	}
	return (str);
}
