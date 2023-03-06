#include "main.h"

/**
 * print_chessboard - prints an 8x8 chessboard
 * @a: pointer to an array of 8 characters
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
			if (j == 7)
			_putchar('\n');
		}
	}
}

