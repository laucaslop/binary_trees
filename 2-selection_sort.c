#include "sort.h"

/**
* selection_sort - array of integers in ascending order
* @array: is the list of integers
* @size: is the lenght of list
* Return: void
*/
void selection_sort(int *array, size_t size)
{
	size_t m, n, min;
	int tmp;

	if (array == NULL || size < 2)
		return;

	for (m = 0; m < size - 1; m++)
	{
		min = m;

		for (n = m + 1; n < size; n++)
		{
			if (array[n] < array[min])
				min = n;
		}

		if (array[m] > array[min])
		{
			tmp = array[min];
			array[min] = array[m];
			array[m] = tmp;
			print_array(array, size);
		}
	}
}
