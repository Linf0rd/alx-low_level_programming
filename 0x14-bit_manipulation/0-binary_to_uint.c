#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to a string of 0 and 1 chars.
 *
 * Return: The converted number, or 0 if:
 *		- There is one or more chars in the string b that is not 0 or 1
 *		- b is NULL.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int x;

	if (b == NULL)
		return (0);

	for (x = 0; b[x] != '\0'; x++)
	{
		if (b[x] != '0' && b[x] != '1')
			return (0);
		result = result * 2 + (b[x] - '0');
	}

	return (result);
}
