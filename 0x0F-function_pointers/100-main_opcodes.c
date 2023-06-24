#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - Function to pront the opcodes of a given block of memory.
 * @start: Pointer to the starting address of the block of memory.
 * @size: Size of the block of memory in bytes.
 */

void print_opcodes(char *start, int size)
{
	int x;

	printf("%02hhx", start[0]);
	for (x = 1; x < size; x++)
		printf(" %02hhx", start[x]);
	printf("\n");
}

/**
 * main - Main function.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line argument strings.
 *
 * Return: 0 on success, 1 if incorrect number of arguments, 2 if argument,
 *		is negative.
 */

int main(int argc, char **argv)
{
	int x, y;
	char *start;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);

	if (x < 0)
	{
		printf("Error\n");
		return (2);
	}

	start = (char *)main;

	for (y = 0; y < x; y++)
		printf("%02hhx ", start[y]);
	printf("\n");

	return (0);
}
