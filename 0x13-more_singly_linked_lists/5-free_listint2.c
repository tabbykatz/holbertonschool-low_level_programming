#include "lists.h"

/**
 * free_listint2 - frees the list and sets head to NULL
 * @head: double ptr to list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *location;
	listint_t *phree;

	if (!head)
		return;
	location = *head;

	while (location)
	{
		phree = location;
		location = location->next;
		free(phree);
	}
	*head = NULL;
}
