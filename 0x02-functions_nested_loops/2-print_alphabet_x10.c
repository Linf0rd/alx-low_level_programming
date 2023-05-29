#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times
 *
 * Description: Prints the lowercase alphabet followed by a new line repeated,
 *		ten times.
 */

void print_alphabet_x10(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 'a'; b <= 'z'; b++)
			_putchar(b);

		_putchar('\n');
	}
}
