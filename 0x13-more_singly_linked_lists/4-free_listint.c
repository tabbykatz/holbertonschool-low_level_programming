#include "lists.h"

/**
 * free_listint - frees the list
 * @head: points to list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *phree;

	if (!head)
		return;
	while (head)
	{
		phree = head;
		head = head->next;
		free(phree);
	}
}
