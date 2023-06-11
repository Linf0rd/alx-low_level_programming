#include "main.h"

/**
 * main - Prints the name of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int x, y;

	for (x = 0; x < argc; x++)
	{
		for (y = 0; argv[x][y] != '\0'; y++)
			_putchar(argv[x][y]);

		_putchar('\n');
	}

	return (0);
}
