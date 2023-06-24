#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - Prints numbers, followed by a new line.
 *
 * @separator: String to be printed between numbers.
 * @n: Number of integers passed to the function.
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int x;

	va_start(args, n);

	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(args, int));
		if (separator != NULL && x != n - 1)
			printf("%s", separator);
	}

	printf("\n");

	va_end(args);
}
