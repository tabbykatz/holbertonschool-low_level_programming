#include "lists.h"

/**
 * sum_listint - returns sum of all data in list
 * @head: points to list
 * Return: sum or 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
