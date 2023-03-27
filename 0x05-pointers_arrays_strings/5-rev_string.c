#include "main.h"
/**
 * rev_string -prints string in reverse
 * @s: parameter
 * Return: void
 */

void rev_string(char *s)
{
	char rev = s[0];
	int i;
	int count = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		count++;
	for (i = 0 ; i < count ; i++)
	{
		count--;
		rev = s[i];
		s[i] = s[count];
		s[count] = rev;
	}
}

