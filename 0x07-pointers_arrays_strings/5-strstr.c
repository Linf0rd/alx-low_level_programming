#include "main.h"

/**
 * _strstr - Locates a substring.
 * @haystack: The amin string to be searched.
 * @needle: The substring to be located.
 *
 * Return: A pointer to the beginning of the located substring or NULL if,
 *		the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int x, y;

	for (x = 0; haystack[x] != '\0'; x++)
	{
		for (y = 0; needle[y] != '\0'; y++)
		{
			if (haystack[x + y] != needle[y])
				break;
		}

		if (needle[y] == '\0')
			return (haystack + x);
	}

	return (NULL);
}
