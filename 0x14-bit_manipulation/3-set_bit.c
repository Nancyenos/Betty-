#include "main.h"
/**
 * set_bit -converts to 1 a bit at index
 * @n:number
 * @index: the index
 * Return: -1 on failure, 1 0n success
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	*n |= ((1UL << index) | *n);
	return (1);
}
