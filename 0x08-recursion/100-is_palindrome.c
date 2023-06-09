#include "main.h"

/**
 * _strlen - Returns the lenght of a string.
 * @s: The string to calculate the length of.
 *
 * Return: The length of the string.
 */

int _strlen(char *s)
{
	int l = 0;

	while (s[l] != '\0')
		l++;

	return (l);
}

/**
 * check_palindrome - Recursive helper function to check if a string is a,
 *			palindrome.
 * @s: The string to check.
 * @x: The starting index of the current substring.
 * @y: The ending index of the current substring.
 *
 * Return: 1 if the substring is a palindrome, 0 otherwise.
 */

int check_palindrome(char *s, int x, int y)
{
	if (x >= y)
		return (1);

	if (s[x] != s[y])
		return (0);

	return (check_palindrome(s, x + 1, y - 1));
}

/**
 * is_palindrome - Check if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */

int is_palindrome(char *s)
{
	int len;

	if (s == NULL)
		return (0);

	len = _strlen(s);
	return (check_palindrome(s, 0, len - 1));
}
