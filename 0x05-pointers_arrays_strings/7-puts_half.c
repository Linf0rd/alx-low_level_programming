#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: Input string
 */

void puts_half(char *str)
{
	int len = 0;
	int x, y;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 0)
		y = len / 2;
	else
		y = (len + 1) / 2;

	for (x = y; x < len; x++)
		_putchar(str[x]);

	_putchar('\n');
}

