#include "3-calc.h"

/**
 * main - Perfoms simple operations.
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: 0 on success, 98, 99 or 100 on failure.
 */

int main(int argc, char *argv[])
{
	int a, b, total;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op_func = get_op_func(argv[2]);

	if (op_func == NULL)
	{
		printf("Error\n");
		return (99);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && b == 0)
	{
		printf("Error\n");
		return (100);
	}

	total = op_func(a, b);
	printf("%d\n", total);

	return (0);
}
