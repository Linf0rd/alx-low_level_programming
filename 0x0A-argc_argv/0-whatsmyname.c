#include "main.h"

/**
 * main - Prints its name, followed by a new line.
 * @argc: Argument count
 * @argv: Arguments
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	char *name = argv[0];

	(void)argc;
	printf("%s\n", name);
	return (0);
}
