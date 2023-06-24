#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - Prints strings, followed by a new line.
 *
 * @separator: String to be printed between the strings.
 * @n: Number of strings passed to the function.
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char *str;
	unsigned int x;

	va_start(args, n);

	for (x = 0; x < n; x++)
	{
		str = va_arg(args, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (separator != NULL && x != n - 1)
			printf("%s", separator);
	}

	printf("\n");

	va_end(args);
}
