#include "main.h"
/**
 * infinite_add - Adds two numbers.
 * @n1: The first number to be added.
 * @n2: The second number to be added.
 * @r: The buffer that the function will use to store the result.
 * @size_r: The buffer size.
 *
 * Return: If the result can be stored in r - a pointer to the result.
 *         If the result cannot be stored in r - 0.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, carry = 0, sum = 0, x, y;
	char *rev_r, *rev_n1, *rev_n2;

	while (n1[len1] != '\0')
		len1++;
	while (n2[len2] != '\0')
		len2++;
	if (len1 > size_r || len2 > size_r)
		return (0);
	rev_r = r;
	rev_n1 = n1 + len1 - 1;
	rev_n2 = n2 + len2 - 1;
	for (x = 0; x < len1 || x < len2; x++)
	{
		sum = carry;
		if (x < len1)
			sum += (*rev_n1 - '0');
		if (x < len2)
			sum += (*rev_n2 - '0');
		*rev_r = (sum % 10) + '0';
		carry = sum / 10;
		rev_r++;
		rev_n1--;
		rev_n2--;
	}
	if (carry)
	{
		if (x >= size_r)
			return (0);
		*rev_r = carry + '0';
		rev_r++;
	}
	*rev_r = '\0';
	for (x = 0, y = strlen(r) - 1; x < y; x++, y--)
	{
		char temp = r[x];
		r[x] = r[y];
		r[y] = temp;
	}
	return (r);
}
