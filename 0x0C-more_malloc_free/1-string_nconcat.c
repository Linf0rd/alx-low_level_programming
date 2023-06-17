#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of bytes from s2 to concatenate.
 *
 * Return: A pointer to the concatenated string (s1 follwed by the first n
 *		bytes of s2).
 *		If the function fails or n is greater than or equal to the
 *		length of s2, it returns NULL.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cat;
	unsigned int len1, len2, cat_len, x, y;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
		n = len2;

	cat_len = len1 + n;

	cat = malloc(sizeof(char) * (cat_len + 1));

	if (cat == NULL)
		return (NULL);

	for (x = 0; x < len1; x++)
		cat[x] = s1[x];

	for (y = 0; y < n; y++)
		cat[x++] = s2[y];

	cat[x] = '\0';

	return (cat);
}
