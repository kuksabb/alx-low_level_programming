#include "lists.h"
/**
 * get_dnodeint_at_index - gets the nth node of a dlistint list
 * @head: pointer to the head of list
 * @index: index of node
 * Return: NULL if node doesn't exist
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
