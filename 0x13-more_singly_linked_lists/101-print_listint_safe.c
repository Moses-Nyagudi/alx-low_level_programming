#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list and exits on failure.
 * @head: A pointer to the head of the list.
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;

	const listint_t *tortoise, *hare;

	tortoise = hare = head;

	while (hare != NULL && hare->next != NULL)
	{
		printf("[%p] %d\n", (void *)tortoise, tortoise->n);
		count++;

		tortoise = tortoise->next;
		hare = hare->next->next;

		if (tortoise == hare)
		{
			printf("-> [%p] %d\n", (void *)tortoise, tortoise->n);
			printf("Error: Infinite loop detected\n");
			exit(98);
		}
	}

	if (tortoise != NULL)
	{
		printf("[%p] %d\n", (void *)tortoise, tortoise->n);
		count++;
	}

	return (count);
}
