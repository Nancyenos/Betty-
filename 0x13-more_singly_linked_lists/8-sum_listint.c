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
	if (head == NULL)
	{
		return (0);
	}
	else
	{
		while (temp != NULL)
		{
			sum += temp->n;
			temp = temp->next;
		}
		return (sum);
	}
}

