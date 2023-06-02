#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal
 * @n: number of times the character '\' should be printed
 */

void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (x = 0; x < n; x++)
	{
		for (y = 0; y < x; x++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
