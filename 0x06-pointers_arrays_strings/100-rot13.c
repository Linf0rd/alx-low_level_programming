#include "main.h"
/**
 * rot13 - encodes a string using ROT13 cipher
 * @s: the string to encode
 *
 * Return: a pointer to the encoded string
 */
char *rot13(char *s)
{
	int x, y;
	char *rot = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *alpha = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; alpha[y] != '\0'; y++)
		{
			if (s[x] == alpha[y])
			{
				s[x] = rot[y];
				break;
			}
		}
	}

	return (s);
}
