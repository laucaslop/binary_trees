#include "sort.h"

/**
* bubble_sort - bubble_sort
* @array: array
* @size: size
* Return: void
*/
void bubble_sort(int *array, size_t size)
{
	size_t i, n, tmp;

	for (i = 0; i < size; i++)
	{
		for (n = 0; n < size - i - 1; n++)
		{
			if (array[n] > array[n + 1])
			{
				tmp = array[n];
				array[n] = array[n + 1];
				array[n + 1] = tmp;
				print_array(array, size);
			}
		}

	}
}
