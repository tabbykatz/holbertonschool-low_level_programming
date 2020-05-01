#include "lists.h"

/**
 * print_dlistint - print elements of doubly linked list
 * @h: the head of list
 * Return: nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	if (!h)
		return (0);
	while (h)
	{
		printf("%u\n", h->n);
		nodes += 1;
		h = h->next;
	}
	return (nodes);
}
