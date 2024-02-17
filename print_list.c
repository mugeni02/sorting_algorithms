#include <stdio.h>
#include "sort.h"

/**
 * print_list - This function prints a list of integers
 *
 * @list: The list to be printed
 */
void print_list(const listint_t *list)
{
	int i;

	for (i = 0; list; i++)
	{
		if (i > 0)
			printf(", ");
		printf("%d", list->n);
		list = list->next;
	}
	printf("\n");
}
