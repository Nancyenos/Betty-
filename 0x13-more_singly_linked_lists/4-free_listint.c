#include "lists.h"
#include <stdlib.h>

/**
 * free_listint -frees the head of a list
 * @head: pointer to first element
 * Return: void
 */


void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}

