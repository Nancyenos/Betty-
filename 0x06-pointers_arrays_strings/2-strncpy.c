#include "main.h"
/**
 * _strncpy - copys a string
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 * Return: dest
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
