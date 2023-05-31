#include <stdlib.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long long fib1 = 1, fib2 = 2, fib_sum = 0, even = 0;
	int limit = 4000000, x;

	while (fib1 <= limit)
	{
		if (fib1 % 2 == 0)
			even += fib1;

		fib_sum = fib1 + fib2;
		fib1 = fib2;
		fib2 = fib_sum;
	}

	printf("%llu\n", even);

	return (0);
}
