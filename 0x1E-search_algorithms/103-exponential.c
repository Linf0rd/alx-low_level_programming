#include "search_algos.h"

/**
 * exponential_search - Searches for a value in a sorted array of integers,
 * using the Exponential search algorithm.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The first index where the value is located, or -1 if the value is,
 * not present in the array or if the array is NULL.
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;
	size_t low, high;

	if (array == NULL || size == 0)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	low = bound / 2;
	high = (bound < size ? bound : size) - 1;
	printf("Value found between indexes [%lu] and [%lu]\n", low, high);

	return (binary_search_(array, low, high, value));
}

/**
 * binary_search_ - Searches for a value in a sorted array of integers,
 * using the Binary search algorithm.
 * @array: A pointer to the first element of the array to search in.
 * @low: The lower bound of the array to search in.
 * @high: The upper bound of the array to search in.
 * @value: The value to search for.
 *
 * Return: The index where the value is located, or -1 if the value is not,
 * present in the array.
 */

int binary_search_(int *array, size_t low, size_t high, int value)
{
	size_t mid;

	while (low <= high)
	{
		print_subarray(array, low, high);
		mid = (low + high) / 2;

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			low = mid + 1;

		else
			high = mid - 1;
	}

	return (-1);
}

/**
 * print_subarray - Prints the elements of an array within a given range.
 * @array: A pointer to the first element of the array to print.
 * @low: The lower bound of the array to print.
 * @high: The upper bound of the array to print.
 */

void print_subarray(int *array, size_t low, size_t high)
{
	printf("Searching in array: ");
	while (low <= high)
	{
		printf("%d", array[low]);
		if (low < high)
			printf(", ");
		low++;
	}
	printf("\n");
}
