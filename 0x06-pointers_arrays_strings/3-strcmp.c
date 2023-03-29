#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: string one
 * @s2: string two
 *
 * Return: equality result
 */

int _strcmp(char *s1, char *s2)
{
	int check = 0;

	/* while *s1 not empty */
	while (*s1)
	{
		if (*s1 != *s2)
		{
			/* 48 = 0 (ASCII) */
			check = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (check);
}
