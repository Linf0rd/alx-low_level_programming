#include <stdio.h>
#include <stdlib.h>

/**
 * main - Adds positive numbers.
 * @argc: Argument count
 * @argv: Arguments
 *
 * Return: 0 on success, 1 on error.
 */

int main(int argc, char **argv)
{
	int x, num, sum;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	sum = 0;
	for (x = 1; x < argc; x++)
	{
		num = atoi(argv[x]);
		if (num <= 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}

	printf("%d\n", sum);

	return (0);
}
