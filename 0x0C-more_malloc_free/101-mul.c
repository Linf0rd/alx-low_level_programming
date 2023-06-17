#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int print_error_and_exit(void);
int is_digit_string(char *str);
void multiply(char *num1, char *num2);

/**
 * main - Multiplies two positive numbers.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: 0 on success, 98 on failure.
 */

int main(int argc, char *argv[])
{
	if (argc != 3 || !is_digit_string(argv[1]) || !is_digit_string(argv[2]))
	{
		return (print_error_and_exit());
	}

	multiply(argv[1], argv[2]);

	return (0);
}

/**
 * print_error_and_exit - Prints an error message and exits with status 98.
 *
 * Return: Always return 98.
 */

int print_error_and_exit(void)
{
	printf("Error\n");
	return (98);
}

/**
 * is_digit_string - Checks if a string consists only of digits.
 * @str: The string to check.
 *
 * Return: 1 If the string consists only of digits, 0 otherwise.
 */

int is_digit_string(char *str)
{
	if (str == NULL || *str == '\0')
		return (0);

	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}

	return (1);
}

/**
 * multiply - Multiplies two positive numbers.
 * @num1: The first number.
 * @num2: The second number.
 */

void multiply(char *num1, char *num2)
{
	int len1, len2, carry, x, y;
	int *result;

	len1 = strlen(num1);
	len2 = strlen(num2);

	result = calloc(len1 + len2, sizeof(int));
	if (result == NULL)
		exit(98);

	for (x = len1 - 1; x >= 0; x--)
	{
		for (y = len2 - 1; y >= 0; y--)
		{
			carry = (num1[x] - '0') * (num2[y] - '0') + result[x + y + 1];
			result[x + y + 1] = carry % 10;
			result[x + y] += carry / 10;
		}
	}

	x = 0;
	while (result[x] == 0 && x < len1 + len2 - 1)
		x++;

	for (; x < len1 + len2; x++)
		putchar(result[x] + '0');

	putchar('\n');

	free(result);
}
