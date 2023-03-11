#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers and prints the result
 * @argc: The number of arguments passed to the program
 * @argv: An array of pointers to the arguments
 *
 * Return: 0 if successful, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int a, b, result;

	if (argc != 3)
	{
	printf("Error\n");
	return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	result = a * b;

	printf("%d\n", result);

    return (0);
}
