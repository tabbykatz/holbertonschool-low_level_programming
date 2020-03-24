#include "lists.h"

/**
 * free_listint_safe - frees a list
 * @h: the pointer to the start of list to free
 * Return: size of free'd list (in nodes?)
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nodeCount = 0;
	listint_t *location;
	listint_t *temp = NULL;

	if (!h)
		return (0);
	for (; location; nodeCount++)
	{
		if (location < location->next)
		temp = location;
		location = location->next;
		free(temp);
	}
	*h = NULL;
	return (nodeCount);
}
