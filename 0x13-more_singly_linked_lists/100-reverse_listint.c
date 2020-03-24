#include "lists.h"

/**
 * reverse_listint - reverse a list
 * @head: points to start of list
 * Return: pointer to beginning of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *curr, *next;

	curr = *head;

	while (curr->next)
	{
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	*head = prev;
	return (*head);
}
