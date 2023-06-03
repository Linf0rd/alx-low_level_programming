#include <stdio.h>
#include <ctype.h>
#include "main.h"


/**
 * print_buffer - Prints a buffer 10 bytes at a time, starting with
 *                the byte position, then showing the hex content,
 *                then displaying printable charcaters.
 * @b: The buffer to be printed.
 * @size: The number of bytes to be printed from the buffer.
 */

void print_buffer(char *b, int size)
{

	int x, y;
	if (size <= 0)
	{
	printf("\n");
	return;
	}

	for (x = 0; x < size; x += 10)
	{
	printf("%08x: ", x);

	for (y = 0; y < 10; y++)
	{
		if (y + x >= size)
		{
		printf("  ");
		}
		else
		{
		printf("%02x", (unsigned char)b[x + y]);
		}

		if (y % 2)
		{
		printf(" ");
		}
	}

	for (y = 0; y < 10; y++)
	{
		if (y + x >= size)
		{
		printf(" ");
		}
		else if (isprint(b[x + y]))
		{
		printf("%c", b[x + y]);
		}
		else
		{
		printf(".");
		}
	}

	printf("\n");
	}
}
