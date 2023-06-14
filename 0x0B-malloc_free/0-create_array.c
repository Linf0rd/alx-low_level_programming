#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars, and initializes with it,
 *			a specific char.
 * @size: The size of the array to create.
 * @c: The char to initialize the array with.
 *
 * Return: A pointer to the array, or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int x;


	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
		array[x] = c;

	return (array);
}
