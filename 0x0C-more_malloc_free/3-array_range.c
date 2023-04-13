#include "main.h"
#include <stdlib.h>
/**
 * *array_range - creates array of int
 * @min: parameter
 * @max: parameter
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *p;
	int j;
	int s;

	if (min > max)
		return (NULL);
	s = max - min + 1;
	p = malloc(sizeof(int) * s);
	if (p == NULL)
		return (NULL);
	for (j = 0 ; min <= max ; j++)
		p[j] = min++;
	return (p);
}
