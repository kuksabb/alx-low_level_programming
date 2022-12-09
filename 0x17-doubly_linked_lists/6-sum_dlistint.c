#include "lists.h"
/**
 * sum_dlistint - calculates sum of all data(n ) of dlistint_t list
 * @head: pointer to head of list
 * Return: sum of all data
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
