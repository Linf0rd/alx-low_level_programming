#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all possible combinations of two numbers ranging,
 *		from 0 to 99 seperated by a space and coma. Numbers are,
 *		printed in ascending order with two digits. Duplicates,
 *		such as 00 01 and 01 00 are consired the combination.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int w, x, y, z;

	for (w = 0; w <= 98; w++)
	{
		for (x = w + 1; x <= 99; x++)
		{
			for (y = 0; y <= 98; y++)
			{
				for (z = y + 1; z <= 99; z++)
				{
					putchar((w / 10) + '0');
					putchar((w % 10) + '0');
					putchar(' ');
					putchar((x / 10) + '0');
					putchar((x % 10) + '0');

					if (w != 98 || x != 99 ||
						y != 98 || z != 99)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}

