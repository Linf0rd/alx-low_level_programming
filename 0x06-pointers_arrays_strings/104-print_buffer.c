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
	if (size <= 0)
	{
	printf("\n");
	return;
	}

	int i, j;
	for (i = 0; i < size; i += 10)
	{
	printf("%08x: ", i);

	for (j = 0; j < 10; j++)
	{
		if (j + i >= size)
		{
		printf("  ");
		}
		else
		{
		printf("%02x", (unsigned char)b[i + j]);
		}

		if (j % 2)
		{
		printf(" ");
		}
	}

	for (j = 0; j < 10; j++)
	{
		if (j + i >= size)
		{
		printf(" ");
		}
		else if (isprint(b[i + j]))
		{
		printf("%c", b[i + j]);
		}
		else
		{
		printf(".");
		}
	}

	printf("\n");
	}
}
