#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * print_listint - print number of elements in a list
 * @h: element
 * Return: number of elements
 */


size_t print_listint(const listint_t *h)
{
	size_t i;

	for (i = 0 ; h != NULL ; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
