#include "main.h"

/**
 * last_index - get the last index of a string
 *
 * @s: string
 *
 * Return: int
 */
int last_index(char *s);
int check(char *s, int start, int end, int mod);
int last_index(char *s)
{
	int n = 0;

	if (*s > '\0')
	{
		/* + 1 ==> for the length */
		n += last_index(s + 1) + 1;
	}
	return (n);
}

/**
 * is_palindrome - palidrome string
 *
 * @s: string
 *
 * Return: 1 if its palindrome and 0 if its not
 */
int is_palindrome(char *s)
{
	int end = last_index(s);

	return (check(s, 0, end - 1, end % 2));
}

/**
 * check - check if its a plindrome
 *
 * @s: string
 * @start: start of checking
 * @end: end
 * @mod: modulo
 *
 * Return: int
 */
int check(char *s, int start, int end, int mod)
{
	if ((start == end && mod != 0) || (start == end + 1 && mod == 0))
	{
		return (1);
	}
	else if (s[start] != s[end])
	{
		return (0);
	}
	else
	{
		return (check(s, start + 1, end - 1, mod));
	}
}
