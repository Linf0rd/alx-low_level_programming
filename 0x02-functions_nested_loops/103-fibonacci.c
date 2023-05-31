#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long fib1 = 1, fib2 = 2, sum = 0;
	unsigned long limit = 4000000;

	while (fib1 <= limit)
	{
		if (fib1 % 2 == 0)
			sum += fib1;

		sum = fib1 + fib2;
		fib1 = fib2;
		fib2 = sum;
	}

	printf("%lu\n", sum);

	return (0);
}
