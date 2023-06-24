#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as a parameter on each,
 *			element of an array.
 * @array: Array of integers.
 * @size: Size of the array.
 * @action: Pointer to function that needs to be used.
 *
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array && action)
	{
		for (x = 0; x < size; x++)
			action(array[x]);
	}
}
