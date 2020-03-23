#include "lists.h"

/**
 * listint_len - returns the # of elements in list
 * @h: points to start of list
 * Return: # of elements in size_t form
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	if (!h)
		return (0);
	while (h)
	{
		nodes += 1;
		h = h->next;
	}
	return (nodes);
}
