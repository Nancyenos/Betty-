#include "main.h"
/**
 * clear_bit -set to 0 at index
 * @n: number to be set
 * @index: index where to set
 * Return: 1 on success 0 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	*n = (~(1UL << index) & *n);
	return (1);
}
