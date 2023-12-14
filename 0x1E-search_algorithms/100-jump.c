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
	int step = sqrt(size);
	int prev = 0;

	while (array[step] < value && step < size)
	{
		prev = step;
		step += step;
	}

	while (array[prev] < value && prev < size)
	{
		prev++;
	}

	if (array[prev] == value)
	{
		return (prev);
	}

	return (-1);
}
