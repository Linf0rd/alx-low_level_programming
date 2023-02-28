#include "main.h"

/*
 * print_times_table - Prints the n times table,
 * starting with 0.
 * @n: The number to print the times table for.
 *
 * Return: void
 */

void print_times_table(int n)
{
	int i, j;

	if (n > 15 || n < 0)
	 return;

	for (i = 0; i <= n; i++)
	{
	  for (j = 0; j <= n; j++)
	  {
	    if (j == 0)
	      _putchar('0');
	    else if (i * j < 10)
	    {
	    _putchar(',');
	    _putchar(' ');
	    _putchar('_');
	    _putchar('0' + i * j);
	    }
	    else if (i * j < 100)
	    {
	    _putchar(',');
	    _putchar(' ');
	    _putchar('0' + (i * j) / 10);
	    _putchar('0' + (i * j) % 10);
	    }
	    else
	    {
	    _putchar(',');
	    _putchar(' ');
	    _putchar('0' + (i * j) / 100);
	    _putchar('0' + ((i * j) / 10) % 10);
	    _putchar('0' + (i * j) % 10);
	    }
	  }
	  _putchar('\n');
	}
}
