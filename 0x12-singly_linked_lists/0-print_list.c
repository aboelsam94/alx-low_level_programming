#include "lists.h"

/**
 * _strlen - finds the length of the string.
 * @s: the stirng.
 *
 * Return: return thr length in int.
*/

int _strlen(char *s)
{
	int x = 0;

	if (!s)
	{
		return (0);
	}
	while (*s++)
	{
		x++;
	}
	return (x);
}

/**
 * print_list - a function that prints all the elements of a list_t list.
 * @h: pointer to the first node.
 *
 * Return: size of list.
*/

size_t print_list(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		x++;
	}
	return (x);
}
