#include "lists.h"

/**
 * add_nodeint_end - adds node at the end
 * @head: double ptr to start of list
 * @n: the int t put in new node
 * Return: address of new node or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/* declarations */
	listint_t *new;
	listint_t *location;

	/* check for null pointer */
	if (!head)
		return (NULL);
	/* malloc space for new node */
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	/* populate new node with int, NULL */
	new->n = n;
	new->next = NULL;
	if (!*head)
	{
		*head = new;
		return (new);
	}
	/* insulate head  & move to end */
	location = *head;
	while (location->next)
	{
		location = location->next;
	}
	/* make last node point to new node */
	location->next = new;
	/* return new node*/
	return (new);
}
