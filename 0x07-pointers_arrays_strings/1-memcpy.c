#include "main.h"

/**
 * *_memcpy - copies memory area
 *
 * @dest: destination
 * @src: source memory area
 * @n: bytes that will be copied form memory area
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
