#include "sort.h"

/**
 * bubble_sort - function that sorts an array using
 * the Bubble sort algorithm
 * @array: the array
 * @size: the size of the array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j, tmp;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
