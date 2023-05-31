#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Finds and prints the first 98 Fibonacci numbers,
 *		starting with 1 and 2.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long fib1 = 1, fib2 = 2, sum;
	int x;

	printf("%lu, %lu", fib1, fib2);

	for (x = 3; x <= 98; x++)
	{
		sum = fib1 + fib2;
		printf(", %lu", sum);

		fib1 = fib2;
		fib2 = sum;
	}

	printf("\n");

	return (0);
}
