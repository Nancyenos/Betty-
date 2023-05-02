#include "lists.h"

/**
 *  sum_listint -sums all the data
 *  @head: pointer to first element
 *  Return: sum of all data
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum;

	temp = head;
	sum = 0;
	while (temp->next != NULL)
	{
		temp = temp->next;
		sum += temp->n;
	}
	return (sum);
}

