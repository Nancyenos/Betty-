#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints array elements
 * @array: array to b printed
 * @size: size of array
 * @action: funtion pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (j = 0; j < size; j++)
	{
		action(array[j]);
	}
}
