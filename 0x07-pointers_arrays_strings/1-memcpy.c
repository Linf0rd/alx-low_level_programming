#include "main.h"

/**
 * _memcpy - Copies memory area.
 * @dest: The destination memory area.
 * @src: The source memory area.
 * @n: The number of bytes to copy,
 *
 * Return: A pointer to the destination memory area,
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		dest[x] = src[x];

	return (dest);
}
