#include "lists.h"

/**
 * print_listint - a function that prints
 * all the elements of a listint_t list..
 * @h: pointer to the first node.
 *
 * Return: size of the list.
*/

size_t print_listint(const listint_t *h)
{
	size_t x = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		x++;
	}
	return (x);
}
