#include <stdio.h>

/**
 * main - Prints all arguments received by the program.
 * @argc: Argument count
 * @argv: Arguments
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int x;
	(void)argc;

	for (x = 0; x < argc; x++)
		printf("%s\n", argv[x]);

	return (0);
}
