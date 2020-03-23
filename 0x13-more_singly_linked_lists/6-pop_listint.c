#include "lists.h"

/**
 * pop_listint - deletes the head node of list & returns data(n)
 * @head: points to list
 * Return: int n
 */
int pop_listint(listint_t **head)
{
	/* declarations */
	listint_t *location;
	int data = 0;

	/* check for null pointer */
	if (!(*head))
		return (0);
	/* capture n */
	data += (*head)->n;
	/* insulate head & move head pointer to new beginning */
	location = *head;
	*head = (*head)->next;
	free(location);
	return (data);
}
