#include "main.h"

/**
 * *_strncat - concatenates two strings with n bytes
 *
 * @dest: destination string
 * @src: source string
 * @n: bytes from source string
 *
 * Return: destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	int destLen = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		destLen++;
	/* src doesnt need to be null-terminated */
	/* if it contains n or more bytes */
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[destLen + i] = src[i];
	}
	/* null terminated dest */
	dest[destLen + i] = '\0';
	return (dest);
}
