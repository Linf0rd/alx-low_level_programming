#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: pointer to the destination array
 * @src: pointer to the source of data to be copied
 * @n: number of bytes to be copied
 *
 * Return: pointer to the destination array
 */
void *_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int i;
	char *csrc = (char *)src;
	char *cdest = (char *)dest;

	for (i = 0; i < n; i++)
		cdest[i] = csrc[i];

	return (dest);
}

