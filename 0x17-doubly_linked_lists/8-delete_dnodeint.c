#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at index
 * @head: head of list
 * @index: where to delete
 * Return: the 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	/* declarations */
	unsigned int i;
	dlistint_t *location, *temp = NULL;

	/* check for NULL, return fail */
	if (!(head && *head))
		return (-1);

	/* set location to head, check for index == 0 */
	location = *head;
	if (index == 0)
	{
		temp = location;
		*head = location->next;
		free(temp);
		return (1);
	}
	/* look for the index, delete the right node, or fail if !index node */
	else
		for (i = 0; i < (index - 1); i++)
		{
			if (location->next)
			location = location->next;
			else
				return (-1);
		}
		temp = location->next;
		location->next = temp->next;
	free(temp);
	return (1);
}
