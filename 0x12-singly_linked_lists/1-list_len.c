#include "lists.h"

/**
 * list_len - checks the len of linked list.
 * @h: pointer to the first node.
 *
 * Return: size of int.
*/

size_t list_len(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		h = h->next;
		x++;
	}
	return (x);
}

