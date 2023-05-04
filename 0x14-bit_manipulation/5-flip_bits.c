#include "main.h"
/**
 * flip_bits -flips bits
 * @n: number 1
 * @m: number 2
 * Return: no of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xclusive, count;

	xclusive = n ^ m;
	count = 0;
	while (xclusive)
	{
		count += xclusive & 1;
		xclusive >>= 1;
	}
	return (count);
}
