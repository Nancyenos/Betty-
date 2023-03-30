#include "main.h"
/**
 * cap_string - changes upper to lower
 * @str: parameter
 * Return: 0
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
	}
	return (str);
}
