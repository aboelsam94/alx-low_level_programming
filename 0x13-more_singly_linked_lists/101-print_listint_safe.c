#include "lists.h"

/**
 * _rev - a func that reallocates memory for an array of pointers.
 * @list: the old list to append.
 * @size: soze of the new list.
 * @new: new node.
 *
 * Return: pointer to the new list.
*/

const listint_t **_rev(const listint_t **list, size_t size,
		const listint_t *new)
{
	const listint_t **newList;
	size_t x;

	newList = malloc(size * sizeof(listint_t *));

	if (newList == NULL)
	{
		free(list);
		exit(98);
	}

	for (x = 0; x < size - 1; x++)
	{
		newList[x] = list[x];
	}
	newList[x] = new;
	free(list);
	return (newList);
}


/**
 * print_listint_safe - a function that prints a listint_t linked list.
 * @head: pointer to the start of the list.
 *
 * Return: number of nodes in the list.
*/

size_t print_listint_safe(const listint_t *head)
{
	size_t x, num = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (x = 0; x < num; x++)
		{
			if (head == list[x])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (num);
			}
		}
		num++;
		list = _rev(list, num, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (num);
}
