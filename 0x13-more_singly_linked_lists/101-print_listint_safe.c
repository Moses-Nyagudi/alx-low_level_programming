#include "lists.h"
/**
 * print_listint_safe - Prints a listint_t linked list and exits on failure.
 * @head: A pointer to the head of the list.
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node_count = 0;

	const listint_t *current;

	current = head;
	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		node_count++;

		if (current == current->next)
		{
			printf("-> [%p] %d\n", (void *)current->next, current->next->n);
			printf("Error: Infinite loop detected\n");
			exit(98);
		}

		current = current->next;
	}
	return (node_count);
}

