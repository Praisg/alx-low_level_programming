#include "lists.h"
int sum_listint(listint_t *head)
{
	int sumim = 0;
	listint_t *temp = head;

	while (temp)
	{
		sumim += temp->n;
		temp = temp->next;
	}

	return (sumim);
}

