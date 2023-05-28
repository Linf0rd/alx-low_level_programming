#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all the numbers of base 16 in lowercase,
 *		followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main (void)
{
	int x;
	char digit;

	for (x = 0; x < 10; x++)
	{
		digit = '0' + x;
		putchar(digit);
	}

	for (x = 0; x < 6; x++)
	{
		digit = 'a' + x;
		putchar(digit);
	}

	putchar('\n');

	return (0);
}

