#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Finds the sum of even-valued terms
 * in the Fibonacci sequence whose values do not exceed 4,000,000
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int term1 = 1, term2 = 2, nextTerm, sum = 2;

    while (term2 <= 4000000)
    {
        nextTerm = term1 + term2;
        term1 = term2;
        term2 = nextTerm;

        if (term2 % 2 == 0)
            sum += term2;
    }

    printf("%d\n", sum);

    return 0;
}

