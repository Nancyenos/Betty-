#include "main.h"
/**
 * swap_int - swaps two integer values
 * @a: parameter
 * @b: parameter
 * Return: null
 */


void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}

