#include "lists.h"

/**
 * print_listint_safe - prints list
 * @head: points to start of list
 * Return: number of nodes in size_t or exit 98
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodeCount = 0;

	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		nodeCount += 1;

		if (head < head->next)
		{
			head = head->next;
			printf("-> [%p] %d\n", (void *)head, head->n);
			exit(98);
		}
		else
			head = head->next;
	}
	return (nodeCount);
}
