#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program assigns a random number to the variable n each,
 *		time it is executed. It then prints whether the number stored,
 *		in the variable n is positive, negative, or zero.
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int n = 0;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}

	return (0);
}
