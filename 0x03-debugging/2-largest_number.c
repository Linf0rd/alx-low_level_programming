#include "main.h"

/*
 * largest_number - returns the largest of 3 numbers
 * @a: 1st int
 * @b: 2nd int
 * @c: 3rd int
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest = b;

	if (a > b)
	{
		largest = a;
	}
	else if (c > b)
	{
		largest = c;
	}

	return (largest);
}
