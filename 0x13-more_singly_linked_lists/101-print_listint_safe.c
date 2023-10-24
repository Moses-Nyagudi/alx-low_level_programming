#include "lists.h"
/**
 * print_listint_safe - Prints a listint_t linked list and exits on failure.
 * @head: A pointer to the head of the list.
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node_count = 0;

	listint_t *visited_nodes = NULL;

	listint_t *new_node, *check_node;

	while (head != NULL)
	{
		new_node = malloc(sizeof(listint_t));

		if (new_node == NULL)
			exit(98);

		new_node->n = head->n;
		new_node->next = visited_nodes;
		visited_nodes = new_node;

		check_node = visited_nodes;
		while (check_node->next != NULL)
		{
			check_node = check_node->next;
			if (head == check_node)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				 while (visited_nodes != NULL)
				 {
					 new_node = visited_nodes;
					 visited_nodes = visited_nodes->next;
					 free(new_node);
				 }
				return (node_count);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		node_count++;
	}
	while (visited_nodes != NULL)
	{
		new_node = visited_nodes;
		visited_nodes = visited_nodes->next;
		free(new_node);
	}
	return (node_count);
}

