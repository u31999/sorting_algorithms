#include "sort.h"

/**
 * bubble_sort - Implements the bubble sort algorithm
 * @array: The array pointer
 * @size: The size of the array
 *
 * Return: Null Void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, c;

	for(i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				c = array[j];
				array[j] = array[j + 1];
				array[j + 1] = c;
				print_array(array, size);
			}
		}
	} 
}
