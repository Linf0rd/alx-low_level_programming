#include <unistd.h>
#include <string.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints a specific string to the standard error
 *
 * Return: Always 1 (Error)
 */

int main(void)
{
	ssize_t x;
	char *string = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	x = strlen(string);
	if (write(2, string, x) != x)
		return (1);

	return (1);
}

