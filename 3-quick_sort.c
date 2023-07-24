#include "sort.h"

/**
* partition - Partitions an array
* @arr: Array to be sorted
* @low: Lower partition boundary
* @high: Higher partition boundary
* @size: Array size
* Return: int - Partition point
*/
int partition(int *arr, int low, int high, int size)
{
	int pivot = arr[high]; /* Choose the last element as the pivot */
	int i = low - 1, j; /* Index of smaller element */

	for (j = low; j < high; j++)
	{
		/* If the current element is smaller than or equal to the pivot */
		if (arr[j] <= pivot)
		{
			i++; /* Increment index of smaller element */

			if (i != j)
			{
				swap(&arr[i], &arr[j]);
				print_array(arr, size);
			}
		}
	}

	if ((i + 1) != high)
	{
		swap(&arr[i + 1], &arr[high]);
		print_array(arr, size);
	}

	return (i + 1);
}

/**
 * sort - Quick sort algorithm
 * @arr: Array to be sorted
 * @low: Lower partition boundary
 * @high: Higher partition boundary
 * @size: Array size
 * Return: void
 */
void sort(int *arr, int low, int high, int size)
{
	int pivotIndex;

	if (low < high)
	{
		/* Find pivot position and divide the array into two sub-arrays */
		pivotIndex = partition(arr, low, high, size);

		/* Recursively sort the two sub-arrays */
		if (pivotIndex - low > 1)
			sort(arr, low, pivotIndex - 1, size);
		if (high - pivotIndex > 1)
			sort(arr, pivotIndex + 1, high, size);
	}
}

/**
* quick_sort - Sorts array using quick sort
* @array: Array to sort
* @size: Array size
* Return: void
*/
void quick_sort(int *array, size_t size)
{
	sort(array, 0, size - 1, size);
}

