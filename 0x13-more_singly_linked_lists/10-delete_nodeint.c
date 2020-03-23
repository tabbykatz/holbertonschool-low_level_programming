#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node at index
 * @head: ptr to ptr to list
 * @index: where to delete node
 * Return: 1 on success or -1 on fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *location;
	listint_t *temp;

	if (!(head && *head))
		return (-1);
	location = *head;
	for (i = 0; i < (index - 1); i++)
	{
		if (location->next)
			location = location->next;
		else
			return (-1);
	}
	if (index == 0)
	{
		temp = location;
		*head = location->next;
	}
	else
	{
		temp = location->next;
		location->next = temp->next;
	}
	free(temp);
	return (1);
}
