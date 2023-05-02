#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the head and returns heads data
 * @head: pointer to first element
 * Return: &head
 */

int pop_listint(listint_t **head)
{
	int i;
	listint_t *temp;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	i = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (i);
}
