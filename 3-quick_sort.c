#include "sort.h"
/**
 * swap_arr - swap
 * @array: array
 * @size: size
 * @a: a
 * @b: b
 */
void swap_arr(int *array, size_t size, int *a, int *b)
{
	if (*a != *b)
	{
		int temp = *a;
		*a = *b;
		*b = temp;
		print_array((const int *)array, size);
	}
}

/**
 * partition - lomuto
 * @array: unsorted array
 * @start: start of array
 * @end: end of array
 * @size: size of array
 * Return: pivot index
 */
size_t partition(int *array, size_t size, size_t start, size_t end)
{
	int pivot = array[end];
	size_t i, pi_index = start;

	for (i = start; i < end; i++)
	{
		if (array[i] <= pivot)
		{
			swap_arr(array, size, &array[i], &array[pi_index]);
			pi_index = pi_index + 1;
		}
	}
	swap_arr(array, size, &array[end], &array[pi_index]);
	return (pi_index);
}
/**
 * Quick_sort - quick sort
 * @array: unsorted array
 * @start: start of array
 * @end: end of array
 * @size: size or array
 */
void Quick_sort(int *array, size_t start, size_t end, size_t size)
{
	size_t pi_index;

	if (start < end)
	{
		pi_index = partition(array, size, start, end);
		if (pi_index > 0)
			Quick_sort(array, start, pi_index - 1, size);
		Quick_sort(array, pi_index + 1, end, size);
	}
}
/**
 * quick_sort - quick sort array
 * @array: unsorted array
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	size_t start = 0, end = size - 1;

	Quick_sort(array, start, end, size);
}
