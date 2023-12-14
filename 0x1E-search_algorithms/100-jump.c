#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers,
 * using the Jump search algorithm.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The first index where the value is located, or -1 if the value is,
 * not present in the array or if the array is NULL.
 */

int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t prev = 0;

	if (array == NULL)
		return (-1);

	while (array[prev] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);

		prev += step;

		if (prev >= size)
			break;
	}

	size_t start = prev - step;

	printf("Value found between indexes [%lu] and [%lu]\n", start, prev);

	for (size_t x = start; x <= prev && x < size; x++)
	{
		printf("Value checked array[%lu] = [%d]\n", x, array[x]);

		if (array[x] == value)
			return (x);
	}

	return (-1);
}
