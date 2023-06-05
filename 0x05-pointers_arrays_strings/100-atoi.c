#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The input string.
 *
 * Return: The converted integer.
 */

int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int x = 0;

	while (s[x])
	{
		if (s[x] == '-')
			sign *= -1;
		else if (s[x] >= '0' && s[x] <= '9')
			result = result * 10 + (s[x] - '0');
		else if (result != 0)
			break;
		x++;
	}

	return (result * sign);
}
