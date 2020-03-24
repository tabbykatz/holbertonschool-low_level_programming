#include "lists.h"

/**
 * find_listint_loop - fnd a loop in a list
 * @head: points to beginning of list
 * Return: the address where loop starts or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	if (!head)
		return (NULL);
	while (head)
	{
		if (head > head->next)
		{
			head = head->next;
		}
		else
			return (head);
	}
	return (NULL);
}
