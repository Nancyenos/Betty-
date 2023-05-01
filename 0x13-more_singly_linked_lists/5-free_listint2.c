#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 -frees the list
 * @head: pointer to the first element
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
