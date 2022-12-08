#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of dlistint_t
 * @head: pointer to the head
 * @n: integer for new node to contain
 * Return: address of new element or NULL
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head != new;

	return (new);
}
