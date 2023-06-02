#include "main.h"

/**
 * print_triangle - prints a triangle of a given size
 *
 * @size: size of the triangle.
 *
 */

void print_triangle(int size)
{
	int x, y;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (x = 0; x < size; x++)
	{
		for (y = 0; y <= x; y++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
