#include "function_pointers.h"

/**
 * int_index - Searches for an integer.
 * @array: Array of integers.
 * @size: Number of elements in the array.
 * @cmp: Pointer to function used to compare values.
 *
 * Return: Index of the first element for which the cmp function does not,
 *		return 0.
 *		1 if no element matches or size <=0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array && cmp && size > 0)
	{
		for (x = 0; x < size; x++)
		{
			if (cmp(array[x]))
				return (x);
		}
	}
	return (-1);
}
