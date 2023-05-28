#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the alphabet in lowercase, excluding 'q' and 'e',
 *		followed by a new line, using only the putchar function.
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a != 'q' && a != 'e')
		{
			putchar(a);
		}
	}

	putchar('\n');

	return (0);
}

