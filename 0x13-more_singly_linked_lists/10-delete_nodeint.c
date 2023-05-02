#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index -delete node at idx
 * @head: pointer to first node
 * @index: place to delete
 * Return: 1 on succes,0 on fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *previous;
	unsigned int i;

	temp = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	for (i = 0 ; i < index - 1 ; i++)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
	}
	previous = temp->next;
	temp->next = previous->next;
	free(previous);
	return (1);
}
