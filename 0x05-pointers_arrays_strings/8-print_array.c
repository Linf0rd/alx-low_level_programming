#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers.
 * @a: Pointer to the array of integers.
 * @n: Number of elements to be printed
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);

		if (x < n - 1)
			printf(", ");
	}

	printf("\n");
}
