#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - funtion to print name
 * @name: string
 * @f: pointer to funtion
 *
 * Return: null
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
