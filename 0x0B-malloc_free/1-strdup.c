#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copies pointer
 * @str: parameter
 * Return: array
 *
 */

char *_strdup(char *str)
{
	char *p;
	int i;
	int j = 0;

	if (str == NULL)
		return (NULL);
	for (i = 0 ; str[i] != '\0' ; i++)
		p = malloc(sizeof(char) * (i + 1));
	if (p == NULL)
		return (NULL);
	for (j = 0 ; str[j] ; j++)
		p[j] = str[j];
	return (p);
}
