#include "lists.h"

/**
 * pop_listint -  a function that deletes the head node of a
 * listint_t linked list, and returns the head node’s data (n).
 * @head: pointer to the first node.
 *
 * Return: value of the popped node.
*/

int pop_listint(listint_t **head)
{
	listint_t *node;
	int x;

	if (!head || !*head)
	{
		return (0);
	}
	node = (*head)->next;
	x = (*head)->n;
	free(*head);
	*head = node;
	return (x);
}
