#include "main.h"

/**
 * *_strpbrk - searches a string for any of a set of bytes
 *
 * @s: string
 * @accept: accept
 *
 * Return: 0
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
				/* first char that we'll meet which is 'l' */
				/* well get from 'l' to the END */
			}
			j++;
		}
		i++;
	}
	return (0);
}
