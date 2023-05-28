#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all possible combinations of single-digit,
 *		numbers, seperated by commas and spaces, in ascending order.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		putchar(digit + '0');

		if (x != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
}
