#include "main.h"

/**
 * get_bit -prints bit at index
 * @n: number
 * @index: where to print
 * Return: the bit at index or -1 if failure
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
