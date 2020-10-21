#include "sort.h"

/**
* partition - main for data to sort
* @array: array
* @low: lowest limit
* @high: upper limit
* @size: length of the array
* Return: int
*/
int partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i = (low - 1);
	int j;
	int temp = 0;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (i != j)
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
		}
	}
	if (array[high] < array[i + 1])
	{
		temp = array[i + 1];
		array[i + 1] = array[high];
		array[high] = temp;
		print_array(array, size);
	}
	return (i + 1);
}
/**
* q_sort - main for data to sort
* @array: array
* @low: lowest int value
* @high: highest int value
* @size: lenght of the array
*/
void q_sort(int *array, int low, int high, size_t size)
{
	int p = 0;

	if (low < high)
	{
		p = partition(array, low, high, size);
		q_sort(array, low, p - 1, size);
		q_sort(array, p + 1, high, size);
	}
}
/**
* quick_sort - main for data to sort
* @array: array
* @size: size
*/
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	q_sort(array, 0, size - 1, size);
}

