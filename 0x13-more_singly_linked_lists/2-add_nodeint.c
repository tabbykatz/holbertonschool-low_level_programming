#include "lists.h"

/**
 * add_nodeint - add a node at the beginning
 * @head: points to pointer which points to list
 * @n: the int to put in the new node
 * Return: address of new element or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *location;

	if (!head)
		return (NULL);
	location = *head;
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = location;
	*head = new;

	return (*head);
}
