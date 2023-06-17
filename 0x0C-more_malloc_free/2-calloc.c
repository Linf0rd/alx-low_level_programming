#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Allocates memory for an array using malloc.
 * @nmemb: Number of elemnets in the array.
 * @size: Size of each element.
 *
 * Return: A pointer to the allocated memory.
 *		if nmemb or size is 0, it returns NULL.
 *		If malloc fails, it returns NULL.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int total_size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;
	ptr = malloc(total_size);

	if (ptr == NULL)
		return (NULL);

	memset(ptr, 0, total_size);

	return (ptr);
}
