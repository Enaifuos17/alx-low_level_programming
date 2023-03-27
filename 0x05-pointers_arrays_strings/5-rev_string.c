#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: string parameter
 */

void rev_string(char *s)
{
	int len = 0, i;
	char temp;

	/* length of the string */
	while (s[len])
		len++;
	/* swap the string by looping on the first half string */
	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
}
