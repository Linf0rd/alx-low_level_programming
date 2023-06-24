#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - Prints anything.
 *
 * @format: List of types of arguments passed to the function.
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list args;
	char *str;
	char *sep = "";
	unsigned int x = 0;

	va_start(args, format);

	while (format && format[x])
	{
		switch (format[x])
		{
			case 'c':
				printf("%s%c", sep, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", sep, str);
				break;
			default:
				x++;
				continue;
		}

		sep = ", ";
		x++;
	}

	printf("\n");

	va_end(args);
}
