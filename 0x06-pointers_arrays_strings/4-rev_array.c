/**
 * reverse_array - reverses the content of an array of integers
 * @a: pointer to the first element of the array
 * @n: number of elements of the array
 *
 */

void reverse_array(int *a, int n)
{
	int x, temp;

	for (x = 0; x < n / 2; x++)
	{
		temp = a[x];
		a[x] = a[n - x - 1];
		a[n - x - 1] = temp;
	}
}
