#include "main.h"

/**
 * sqrt_helper - returns the natural square root of a number
 * @n: number to find the square root of
 * @i: current value to check
 *
 * Return: natural square root of n, or -1 if n does not have a natural square root
 */
int sqrt_helper(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	else
		return (sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find the square root of
 *
 * Return: natural square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (sqrt_helper(n, 0));
}
