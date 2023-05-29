#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Description: This program prints all possible different combinations,
 *		of two digits in ascending order, separated by commas and,
 *		spaces. The two digits must be different, and the smallest,
 *		combination of two digits is printed.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x, y;

	for (x = 0; x <= 8; x++)
	{
		for (y = x + 1; y <= 9; y++)
		{
			putchar(x + '0');
			putchar(y + '0');

			if (x != 8 || y != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
