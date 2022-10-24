#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all elements of a listint_t list
 * @h: const pointer of structure listint_t
 * Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}

