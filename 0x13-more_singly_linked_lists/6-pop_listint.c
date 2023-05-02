#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the head and returns heads data
 * @head: pointer to first element
 * Return: &head
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (head == NULL)
	{
		return (0);
	}
	temp = *head;
	*head = (*head)->next;
	n = temp->n;
	free(temp);
	return (n);
}
