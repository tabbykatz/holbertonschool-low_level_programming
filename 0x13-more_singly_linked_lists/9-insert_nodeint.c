#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at given position
 * @head: ptr to ptr to list
 * @idx: position in list to insert
 * @n: int to put in new node
 * Return: pointer to new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	/* declarations */
	listint_t *location;
	listint_t *new;
	unsigned int i;
	/* check for NULL */
	if (!head)
		return (NULL);
	location = *head;
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = location;
		*head = new;
		return (*head);
	}
	for (i = 0; i < (idx - 1); i++)
	{
		if (location)
			location = location->next;
		else
			return (NULL);
	}

	new->next = location->next;
	location->next = new;
	return (new);
}
