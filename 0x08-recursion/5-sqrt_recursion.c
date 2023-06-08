#include "main.h"

/**
 * sqrt_recursive - Recursive helper function to calculate the square root.
 * @n: The number to calculate the square root of.
 * @o: The current guess for the square root.
 *
 * Return: The square root of n, -1 if it doesn't have a natural square root
 */

int sqrt_recursive(int n, int o)
{
	if (o * o == n)
		return (o);
	if (o * o > n)
		return (-1);

	return (sqrt_recursive(n, o + 1));
}

/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @n: The number to calculate the square root of.
 *
 * Return: The square root of n, -1 if it doesn't have a natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_recursive(n, 0));
}
