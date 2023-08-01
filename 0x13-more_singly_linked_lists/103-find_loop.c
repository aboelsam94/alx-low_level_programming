#include "lists.h"

/**
 * find_listint_loop - finds a loop in a linked list.
 * @head: the linked list to be searched.
 *
 * Return: address of the node.
*/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *p, *end;

	if (head == NULL)
	{
		return (NULL);
	}

	for (end = head->next; end != NULL; end = end->next)
	{
		if (end == end->next)
		{
			return (end);
		}
		for (p = head; p != end; p = p->next)
		{
			if (p == end->next)
			{
				return (end->next);
			}
		}
	}
	return (NULL);
}
