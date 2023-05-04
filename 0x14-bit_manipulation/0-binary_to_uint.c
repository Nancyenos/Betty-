#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint -converts string to unsigned int
 * @b: string in binary
 * Return: decimal number
 */

unsigned int binary_to_uint(const char *b)
{
	int n = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);
		n = (n << 1) + (*b - '0');
		b++;
	}
	return (n);
}
