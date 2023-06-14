#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - Duplicates a string.
 * @str: The string to duplicate.
 *
 * Return: Pointer to the duplicated string, or NULL if insufficient,
 *		memory was available or str is NULL
 */

char *_strdup(char *str)
{
	unsigned int x, y;
	char *dup;

	if (str == NULL)
		return (NULL);

	x = strlen(str);
	dup = malloc((x + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);

	for (y = 0; y < x; y++)
		dup[y] = str[y];

	dup[x] = '\0';

	return (dup);
}
