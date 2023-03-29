#include "main.h"

/**
 * *string_toupper - changes all lowercase letters
 * of a string to uppercase
 *
 * @str: string
 *
 * Return: string
 */

char *string_toupper(char *str)
{
	int i, diff = 32;

	for (i = 0; str[i] != '\0'; i++)
	{
		/* 97 to 122 --> lowerCase */
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - diff;
		}
	}
	return (str);
}
