#include "search_algos.h"

/**
 * advanced_binary - Searches for a value in a sorted array of integers,
 * using the advanced binary search algorithm.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where the value is located, or -1 if the value is,
 *		not present in the array or if the array is NULL.
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	int result;

	if (array == NULL || size == 0)
		return (-1);

	result = binary_search_(array, low, high, value);
	return (result);
}

/**
 * binary_search_ - Recursively searches for a value in a sorted array of,
 *			integers using the binary search algorithm.
 * @array: A pointer to the first element of the array to search in.
 * @low: The lower bound of the array to search in.
 * @high: The upper bound of the array to search in.
 * @value: The value to search for.
 *
 * Return: The index where the value is located, or -1 if the value is not,
 *		present in the array.
 */

int binary_search_(int *array, size_t low, size_t high, int value)
{
	size_t mid;

	if (low > high)
		return (-1);

	printf("Searching in array: ");
	print_subarray(array, low, high);

	mid = (low + high) / 2;

	if (array[mid] == value)
		return (mid);

	if (array[mid] < value)
		return (binary_search_(array, mid + 1, high, value));

	return (binary_search_(array, low, mid - 1, value));
}

/**
 * print_subarray - Prints the elements of an array within a given range.
 * @array: A pointer to the first element of the array to print.
 * @low: The lower bound of the array to print.
 * @high: The upper bound of the array to print.
 */

void print_subarray(int *array, size_t low, size_t high)
{
	while (low <= high)
	{
		printf("%d", array[low]);
		if (low < high)
			printf(", ");
		low++;
	}
	printf("\n");
}
