#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns
 * the nth node of a listint_t linked list.
 * @head: pointer to the first node.
 * @index: index of the node to get.
 *
 * Return: pointer to the node.
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int x;

	for (node = head, x = 0; node && x < index; node = node->next, x++)
		;
	return (node);
}
