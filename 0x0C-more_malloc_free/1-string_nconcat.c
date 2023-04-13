#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: parameter
 * Return: new pointer on success,null if else
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int length_a = 0;
	unsigned int length_b = 0;
	char *s;

	while (s1 && s1[length_a])
		length_a++;
	while (s2 && s2[length_b])
		length_b++;
	if (n < length_b)
	{
		s = malloc(sizeof(char) * (length_a + n + 1));
	}
	else
	{
		s = malloc(sizeof(char) * (length_a + length_b + 1));
	}
	if (!s)
		return (NULL);
	while (i < length_a)
	{
		s[i] = s1[i];
		i++;
	}
	while (n < length_b && i < (length_a + n))
		s[i++] = s2[j++];
	while (n >= length_b && i < (length_a + length_b))
		s[i++] = s2[j++];
	s[i] = '\0';
	return (s);
}
