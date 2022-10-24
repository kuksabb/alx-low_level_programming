#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all elements of a listint_t list
 * @h: const pointer of structure listint_t
 * Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
	int nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d", h->n);
		h = h->next;
		printf("\n");
	}
	return (nodes);
}

