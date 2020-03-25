#include "lists.h"

/**
 * find_listint_loop - fnd a loop in a list
 * @head: points to beginning of list
 * Return: the address where loop starts or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise, *hare;

	if (!head)
		return (NULL);
	tortoise = head;
	hare = head;
	while (hare->next && hare->next->next)
	{
		hare = hare->next->next;
		tortoise = tortoise->next;
		if (hare == tortoise)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				tortoise = tortoise->next;
				hare = hare->next;
			}
			return (hare);
		}
	}
	return (NULL);
}
