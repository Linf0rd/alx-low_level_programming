#include "main.h"

/**
 * print_times_table - Prints the n times table
 * @n: The number of times to print the table
 *
 * Return: void
 */

void print_times_table(int n)
{
	int x, y, product;

	if (n < 0 || n > 15)
		return;

	for (x = 0; x <= n; x++)
	{
		for (y = 0; y <= n; y++)
		{
			product = x * y;
			if (y != 0)
				printf(", ");
			if (product < 10 && y != 0)
				printf("   ");
			else if (product < 100)
				printf("  ");
			printf("%d", product);
		}
		printf("\n");
	}
}
