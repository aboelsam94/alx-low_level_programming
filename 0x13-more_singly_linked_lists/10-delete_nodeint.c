#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes
 * the node at index index of a listint_t linked list.
 * @head: the address of the pointer pointing to the first node.
 * @index: the index of the node to be deleted.
 *
 * Return: 1 on success, and -1 on failure.
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *prev_node;
	unsigned int x = 0;

	if (!head || !*head)
	{
		return (-1);
	}

	if (!index)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
		return (1);
	}
	node = *head;

	while (node)
	{
		if (x == index)
		{
			prev_node->next = node->next;
			free(node);
			return (1);
		}
		x++;
		prev_node = node;
		node = node->next;
	}
	return (-1);
}
