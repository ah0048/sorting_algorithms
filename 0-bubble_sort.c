#include "sort.h"
/**
 * bubble_sort - bubble sort (swap each couple of elements to get the smallest)
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i = 0, j = 0;
	int tmp = 0;

	for (j = 0; j < size; j++)
	for (i = 0; i < size - 1; i++)
	{
		if (array[i] > array[i + 1])
		{
			tmp = array[i + 1];
			array[i + 1] = array[i];
			array[i] = tmp;
		}
		print_array(array, size);
	}
}
