#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory area pointed to,
 *		wit the constand byte b.
 *
 * @s: Pointer to the memory area.
 * @b: Constant byte to fill the memory area with.
 * @n: Number of bytes to fill.
 *
 * Return: Pointer to the filled memory area (s).
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		s[x] = b;

	return (s);
}
