#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index -returns nth node of a list
 * @head: pointer to first element
 * @index: nth node place
 * Return: pointer to the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i;

	temp = head;
	for (i = 0 ; i < index && temp != NULL ; i++)
	{
		temp = temp->next;
	}
	return (temp);
}
