#include "main.h"

/**
 * prime_helper - checks if a number is prime
 * @n: number to check if prime
 * @i: current value to check if a factor
 *
 * Return: 1 if n is prime, otherwise 0
 */
int prime_helper(int n, int i)
{
	if (n < 2)
		return (0);
	else if (i == n)
		return (1);
	else if (n % i == 0)
		return (0);
	else
		return (prime_helper(n, i + 1));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: number to check if prime
 *
 * Return: 1 if n is prime, otherwise 0
 */
int is_prime_number(int n)
{
	return (prime_helper(n, 2));
}
