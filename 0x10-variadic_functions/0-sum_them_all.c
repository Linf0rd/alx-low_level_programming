#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all its parameters.
 *
 * @n: Number of arguments passed to the function.
 *
 * Return: Sum of all parameters.
 *
 * If n == 0, return 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int x;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (x = 0; x < n; x++)
		sum += va_arg(args, int);

	va_end(args);

	return (sum);
}
