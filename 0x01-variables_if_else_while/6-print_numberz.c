#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all single digit numbers of base 10 starting from 0,
 *		follwed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		putchar(x + '0');
	}

	putchar('\n');

	return (0);
}
