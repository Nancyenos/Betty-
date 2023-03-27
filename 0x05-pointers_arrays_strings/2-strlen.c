#include "main.h"
/**
 * _strlen - length of a string
 * @s: parameter
 * Return: 0 on success
 *
 */


int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		 count++;
	}
	return (count);
}

