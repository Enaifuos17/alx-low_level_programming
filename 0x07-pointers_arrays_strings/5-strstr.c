#include "main.h"

/**
 * *_strstr - locates a substring
 *
 * @haystack: string
 * @needle: substring needle
 *
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		/* h pointer points to the current char in haystack */
		char *h = haystack;
		/* n pointer points to the beginning of needle */
		char *n = needle;

		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}
		/* if the while loop exits BCS *n has reached the end of the needle */
		/* THEN the function has found a match */
		/* AND it returns a pointer to the current position in haystack */
		if (*n == '\0')
			return (haystack);
	}
	return (0);
}
