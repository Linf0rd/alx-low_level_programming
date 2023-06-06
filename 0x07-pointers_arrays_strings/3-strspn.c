#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to be checked.
 * @accept: The string containing the accepted bytes.
 *
 * Return: The number of bytes in the initial segment of s which consist,
 *		only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int x, y, found;

	for (x = 0; s[x] != '\0'; x++)
	{
		found = 0;
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				count++;
				found = 1;
				break;
			}
		}
		if (found == 0)
			break;
	}

	return (count);
}
