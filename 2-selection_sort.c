#include "sort.h"


/**
 * selection_sort - function that sorts an array of
 * integers in ascending order using
 * the Selection sort algorithm
 * @array: array of numbers
 * @size: size of 'array'
 */

void selection_sort(int *array, size_t size)
{
	int min, tmp;
	size_t i, j;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[min] > array[j])
				min = j;
		}
		tmp = array[i];
		array[i] = array[min];
		array[min] = tmp;
		print_array(array, size);
	}
}
