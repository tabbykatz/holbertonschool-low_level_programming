#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of list
 * @head: points to list
 * @index: which node
 * Return: node in question or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		if (head->next)
		head = head->next;
		else
			return (NULL);
	}
	return (head);
}
