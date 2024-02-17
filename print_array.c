#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - This function prints an array of integers
 *
 * @array: The array to be printed
 * @size: The size of the array
 */
void print_array(const int *array, size_t size)
{
	size_t i;

	for (i = 0; i < size && array; i++)
	{
		if (i > 0)
			printf(", ");
		printf("%d", array[i]);
	}
	printf("\n");
}
