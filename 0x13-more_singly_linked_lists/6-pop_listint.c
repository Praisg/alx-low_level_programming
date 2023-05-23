#include "lists.h"
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int numm;

	if (!head || !*head)
		return (0);

	numm = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (numm);o
}

