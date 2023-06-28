#include "main.h"

/**
 * _printf - Prints a formatted string to stdout.
 * @format: The format string to print.
 *
 * Return: The number of characters printed.
 */

int _printf(const char *format, ...)
{
	va_list args;
	int x = 0;
	int count = 0;

	va_start(args, format);

	while (format && format[x])
	{
		if (format[x] == '%')
		{
			x++;
			if (format[x] == 'c')
				count += print_char(args);
			else if (format[x] == 's')
				count += print_string(args);
			else if (format[x] == '%')
				count += print_percent(args);
			else
			{
				_putchar('%');
				_putchar(format[x]);
				count += 2;
			}
		}
		else
		{
			_putchar(format[x]);
			count++;
		}
		x++;
	}

	va_end(args);

	return (count);
}
