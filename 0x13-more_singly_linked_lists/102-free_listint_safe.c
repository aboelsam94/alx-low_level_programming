#include "lists.h"

/**
 * find_listint_loop - finds a loop in a linked list.
 * @head: linked list to search.
 *
 * Return: address of node where the loop start.
*/

list_t *find_listint_loop(list_t *head)
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

/**
 * free_listint_safe - a function that frees a listint_t list.
 * @h: head of the list.
 *
 * Return: number of nodes freed.
*/
size_t free_listint_safe(listint_t **h)
{
	listint_t *next, *loopNode;
	size_t len;
	int loop = 1;

	if (h == NULL || *h == NULL)
	{
		return (0);
	}
	loopNode = find_listint_loop(*h);

	for (len = 0; (*h != loopNode || loop) && *h != NULL; *h = next)
	{
		len++;
		next = (*h)->next;

		if (*h == loopNode && loop)
		{
			if (loopNode == loopNode->next)
			{
				free(*h);
				break;
			}
			len++;
			next = next->next;
			free((*h)->next);
			loop = 0;
		}
		free(*h)
	}
	*h = NULL;
	return (len);
}
