#include "lists.h"

/**
 * listint_len - no of items in a list
 * @h: pointer to elements in list
 * Return: no of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t i;

	for (i = 0 ; h != NULL ; i++)
	{
		h = h->next;
	}
	return (i);
}
