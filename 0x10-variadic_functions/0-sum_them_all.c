#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - adds all parameters
 * @n: one of the numbers
 * @...: more variables
 * Return: int
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list add;
	unsigned int i, result = 0;

	va_start(add, n);
	if (n == 0)
	{
		return (0);
	}
	else
	{
		for (i = 0 ; i < n ; i++)
			result = result + va_arg(add, int);
	}
	va_end(add);
	return (result);
}
