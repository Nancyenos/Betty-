#include "main.h"
#include <stdlib.h>
/**
 * memory - puts constant byte
 * @i: mem area
 * @h: character
 * @n: times to copy
 * Return: pointer
 */
char *memory(char *i, char h, unsigned int n)
{
	unsigned int j;

	for (j = 0 ; j < n ; j++)
	{
		i[j] = h;
	}
	return (i);
}


/**
 * *_calloc - assigns mem to an array
 * @nmemb: parameter
 * @size: parameter
 * Return: pointer on succes.null on fail
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	memory(ptr, 0, nmemb * size);
	return (ptr);
}
