#include "main.h"

/**
 * factorial - factorial of int n
 * @n: parameter
 * Return: factorial of n on success
 *
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
