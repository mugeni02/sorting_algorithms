#include "sort.h"

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
    size_t i;

    i = 0;
    while (array && i < size)
    {
        if (i > 0)
            printf(", ");
        printf("%d", array[i]);
        ++i;
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
 * bubble_sort - Sorts an array of integers in ascending order
 * using the Bubble sort algorithm.
 * @array: The array to be sorted.
 * @size: The size of the array.
 */
void bubble_sort(int *array, size_t size)
{
	if (array == NULL || size <= 1)
		return;
	size_t i, j;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
	}
}

/**
 * main - Example usage of the bubble_sort function.
 * Return: Always 0.
 */
int main(void)
{
	int arr[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
	size_t size = sizeof(arr) / sizeof(arr[0]);

	printf("Original array: ");
	print_array(arr, size);
	bubble_sort(arr, size);
	printf("Sorted array: ");
	print_array(arr, size);
	return (0);
}

