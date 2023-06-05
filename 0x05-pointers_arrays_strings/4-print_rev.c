#include "main.h"

/**
 * print_rev - Prints a string in reverse, followed by a new line
 * @s: The string to be printed in reverse
 */

void print_rev(char *s)
{
	int l = 0;

	while (s[l] != '\0')
		l++;

	while (l > 0)
	{
		l--;

		_putchar(s[l]);
	}

	_putchar('\n');
}
