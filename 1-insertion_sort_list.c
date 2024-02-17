#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in ascending
 *                       order using Insertion sort.
 * @list: Double pointer to the head of the doubly linked list.
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current = *list;
	listint_t *next;

	if (!current || !current->next)
		return;
	while (current->next)
	{
		next = current->next;
		if (current->value > next->value)
		{
			listint_t *prev = current->prev;

			current->prev = next;
			next->prev = prev;
			current->next = next->next;
			next->next = current;
			if (prev)
				prev->next = next;
			else
				*list = next;
			print_list(*list);
		}
		else
		{
			current = current->next;
		}
	}
}
/**
 * main - main function
 *
 * Return: return the position of the last element sorted
 */
int main(void)
{
	listint_t *list = NULL;

	for (int i = 10; i > 0; i--)
	{
		listint_t *new_node = malloc(sizeof(listint_t));

		new_node->value = i;
		new_node->prev = NULL;
		new_node->next = list;
		if (list)
			list->prev = new_node;
		list = new_node;
	}
	printf("Original list: ");
	print_list(list);
	insertion_sort_list(&list);
	printf("Sorted list: ");
	print_list(list);
	return (0);
}

