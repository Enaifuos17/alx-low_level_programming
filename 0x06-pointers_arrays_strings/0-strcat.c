#include "main.h"

/**
 * *_strcat - concatenates two strings
 *
 * @dest: destination
 * @src: source
 *
 * Return: destination
 */

char *_strcat(char *dest, char *src)
{
	int destLen = 0, srcLen = 0;
	int i;

	/* find the length of both parameters */
	for (i = 0; dest[i] != '\0'; i++)
		destLen++;
	for (i = 0; src[i] != '\0'; i++)
		srcLen++;
	/* loop on src to get every char & append it to dest */
	for (i = 0; i <= srcLen; i++)
	{
		dest[destLen + i] = src[i];
	}
	return (dest);
}
