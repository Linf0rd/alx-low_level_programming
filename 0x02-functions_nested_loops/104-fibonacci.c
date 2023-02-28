#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    unsigned long int a = 0, b = 1, c, i;

    for (i = 0; i < 98; i++)
    {
        c = a + b;
        printf("%lu", c);
        a = b;
        b = c;
        if (i != 97)
            printf(", ");
    }
    printf("\n");
    return (0);
}

