#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: Pointer to a newly allocated space in memory containning,
 *		The concatenated string, or NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int len1, len2, y, z;
	char *cat;

	len1 = 0;
	len2 = 0;

	if (s1 != NULL)
		len1 = strlen(s1);
	if (s2 != NULL)
		len2 = strlen(s2);

	cat = malloc((len1 + len2 + 1) * sizeof(char));
	if (cat == NULL)
		return (NULL);

	for (y = 0; y < len1; y++)
		cat[y] = s1[y];

	for (z = 0; z < len2; z++)
		cat[len1 + z] = s2[z];

	cat[len1 + len2] = '\0';

	return (cat);
}
