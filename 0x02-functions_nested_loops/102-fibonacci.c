#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the first 50 Fibonacci numbers seperated by commas,
 *		and followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;
	unsigned long fib1 = 1, fib2 = 2, fib_sum;

	printf("%lu, %lu", fib1, fib2);

	for (x = 3; x <= 50; x++)
	{
		fib_sum = fib1 + fib2;
		printf(", %lu", fib_sum);

		fib1 = fib2;
		fib2 = fib_sum;
	}

	printf("\n");

	return (0);
}
