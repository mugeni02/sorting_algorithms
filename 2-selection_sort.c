#include "sort.h"

/**
 * print_array - Prints an array of integers.
 * @array: The array to be printed.
 * @size: The size of the array.
 */
void print_array(const int *array, size_t size)
{
	if (array == NULL || size == 0)
		return;
	for (size_t i = 0; i < size; i++)
	{
		printf("%d", array[i]);
		if (i < size - 1)
			printf(", ");
	}
	printf("\n");
}

/**
 * swap - Swaps two integers.
 * @a: The first integer.
 * @b: The second integer.
 */
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * selection_sort - Sorts an array of integers in ascending order
 * using the Selection sort algorithm.
 * @array: The array to be sorted.
 * @size: The size of the array.
 */
void selection_sort(int arr[], int size)
{
	if (arr == NULL || size <= 1)
		return;
	size_t i, j, min_index;

	for (i = 0; i < size - 1; i++)
	{
		min_index = i;

		for (j = i + 1; j < size; j++)
		{
			if (arr[j] < arr[min_index])
				min_index = j;
		}
		if (min_index != i)
		{
			swap(&arr[i], &arr[min_index]);
			print_array(arr, size);
		}
	}
}

/**
 * main - Example usage of the selection_sort function.
 * Return: Always 0.
 */
int main(void)
{
	int arr[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
	size_t size = sizeof(arr) / sizeof(arr[0]);

	printf("Original array: ");
	print_array(arr, size);
	selection_sort(arr, size);
	printf("Sorted array: ");
	print_array(arr, size);
	return (0);
}

