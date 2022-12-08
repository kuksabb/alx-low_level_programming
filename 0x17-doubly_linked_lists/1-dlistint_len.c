#include "lists.h"
/**
 * dlistint_len - counts the number of elements in dlistint_t
 * @h: head of the node
 * Return: number of elements in dlistint_t
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
