#include "lists.h"
/**
 * free_dlistint - frees a linked dlistint_t list
 * @head: head of the list
*/
void frre_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while(head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
