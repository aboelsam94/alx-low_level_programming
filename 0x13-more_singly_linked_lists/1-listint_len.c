#include "lists.h"

/**
 * listint_len - a function that returns the
 * number of elements in a linked listint_t list.
 * @h: pointer to the first node.
 *
 * Return: size of the list.
*/

size_t listint_len(const listint_t *h)
{
	size_t x = 0;

	while (h)
	{
		h = h->next;
		x++;
	}
	return (x);
}
