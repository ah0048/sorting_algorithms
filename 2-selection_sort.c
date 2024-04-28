#include "sort.h"
/**
 * selection_sort - selection sort array
 * @array: unsorted array
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, imin;
	int tmp;

	for (i = 0; i < size - 1; i++)
	{
		imin = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[imin])
			{
				imin = j;
			}
		}
		if (array[i] > array[imin])
		{
			tmp = array[imin];
			array[imin] = array[i];
			array[i] = tmp;
		}
		print_array((const int *)array, size);
	}
}
