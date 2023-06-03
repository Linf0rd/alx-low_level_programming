#include <stdio.h>
#include <math.h>

/**
 * largest_prime_factor - Finds the largest prime factor of a number
 * @n: The number to find the largest primie factor of.
 *
 * Return: The largest prime factor of the number
 */

long largest_prime_factor(long n)
{
	long x;

	for (x = 2; x <= sqrt(n); x++)
	{
		if (n % x == 0)
		{
			while (n % x == 0)
				n /= x;
		}
	}

	if (n > 1)
		return (n);

	return (x - 1);
}

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	long number = 612852475143;
	long largest_factor = largest_prime_factor(number);

	printf("%ld\n", largest_factor);

	return (0);
}
