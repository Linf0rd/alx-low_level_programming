#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Creates an array of integers.
 * @min: The minimum value (inclusive).
 * @max: The maximmum value (inclusive).
 *
 * Return: A pointer to the newly created array of integers.
 *		If min > max, it returns NULL.
 *		If malloc fails, it returns NULL.
 */

int *array_range(int min, int max)
{
	int *array, x, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
	{
		array[x] = min;
		min++;
	}

	return (array);
}
